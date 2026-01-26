package com.example.hospital.repository;

import com.example.hospital.model.Patient;
import lombok.extern.slf4j.Slf4j;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.jdbc.core.JdbcTemplate;
import org.springframework.stereotype.Repository;
import org.springframework.transaction.annotation.Transactional;

import java.util.List;

@Repository
@Slf4j
public class PatientRepository {

    @Autowired
    private JdbcTemplate jdbcTemplate;

    @Transactional
    public void savePatient(Patient patient) {
        try {
            jdbcTemplate.update(
                    "INSERT INTO patient (name, age, risk_id) VALUES (?, ?, ?)",
                    patient.getName(), patient.getAge(), patient.getRiskId()
            );
        } catch (Exception e) {
            log.error("Error saving patient", e);

            throw e;
        }
    }

    public List<Patient> fetchPatients() {
        String sql = """
            SELECT p.patient_id, p.name, p.age, r.risk_name
            FROM patient p
            JOIN risk_level r ON p.risk_id = r.risk_id
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
}
