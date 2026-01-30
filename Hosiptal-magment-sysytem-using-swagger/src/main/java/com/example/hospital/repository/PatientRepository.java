package com.example.hospital.repository;

import com.example.hospital.exception.ResourceNotFoundException;
import com.example.hospital.model.Patient;
import lombok.extern.slf4j.Slf4j;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.dao.EmptyResultDataAccessException;
import org.springframework.jdbc.core.JdbcTemplate;
import org.springframework.stereotype.Repository;
import org.springframework.transaction.annotation.Transactional;

import java.util.List;

@Repository
public class PatientRepository {

    @Autowired
    private JdbcTemplate jdbcTemplate;

    @Transactional
    public void savePatient(Patient patient) {
        jdbcTemplate.update(
                "INSERT INTO patient (name, age, risk_id) VALUES (?, ?, ?)",
                patient.getName(),
                patient.getAge(),
                patient.getRiskId()
        );
    }

    public List<Patient> fetchPatients() {
        String sql = """
            SELECT p.patient_id, p.name, p.age, r.risk_name
            FROM patient p
            LEFT JOIN risk_level r ON p.risk_id = r.risk_id
        """;
        return jdbcTemplate.query(sql, (rs, rowNum) -> {
            Patient p = new Patient();
            p.setPatientId(rs.getInt("patient_id"));
            p.setName(rs.getString("name"));
            p.setAge(rs.getInt("age"));
            p.setRiskName(rs.getString("risk_name"));
            return p;
        });
    }

    public Patient fetchPatientById(int id) {
        try {
            String sql = """
                SELECT p.patient_id, p.name, p.age, r.risk_name
                FROM patient p
                LEFT JOIN risk_level r ON p.risk_id = r.risk_id
                WHERE p.patient_id = ?
            """;

            return jdbcTemplate.queryForObject(sql, (rs, rowNum) -> {
                Patient p = new Patient();
                p.setPatientId(rs.getInt("patient_id"));
                p.setName(rs.getString("name"));
                p.setAge(rs.getInt("age"));
                p.setRiskName(rs.getString("risk_name"));
                return p;
            }, id);

        } catch (EmptyResultDataAccessException ex) {
            throw new ResourceNotFoundException("Patient not found with id " + id);
        }
    }

    @Transactional
    public void updatePatient(int id, Patient patient) {
        int rows = jdbcTemplate.update(
                "UPDATE patient SET name=?, age=?, risk_id=? WHERE patient_id=?",
                patient.getName(), patient.getAge(), patient.getRiskId(), id
        );

        if (rows == 0) {
            throw new ResourceNotFoundException("Patient not found with id " + id);
        }
    }

    @Transactional
    public void patchPatient(int id, Patient patient) {

        if (patient.getName() != null && !patient.getName().isBlank()) {
            jdbcTemplate.update("UPDATE patient SET name=? WHERE patient_id=?",
                    patient.getName(), id);
        }

        if (patient.getAge() != null) {
            jdbcTemplate.update("UPDATE patient SET age=? WHERE patient_id=?",
                    patient.getAge(), id);
        }

        if (patient.getRiskId() != null) {
            jdbcTemplate.update("UPDATE patient SET risk_id=? WHERE patient_id=?",
                    patient.getRiskId(), id);
        }
    }

    @Transactional
    public void deletePatient(int id) {
        int rows = jdbcTemplate.update(
                "DELETE FROM patient WHERE patient_id=?", id);

        if (rows == 0) {
            throw new ResourceNotFoundException("Patient not found with id " + id);
        }
    }
}
