package com.example.hospital.service;

import com.example.hospital.model.Patient;
import com.example.hospital.repository.PatientRepository;
import lombok.extern.slf4j.Slf4j;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import java.util.List;

@Service
@Slf4j
public class PatientService {

    @Autowired
    private PatientRepository repository;

    public void addPatient(Patient patient) {
        repository.savePatient(patient);
    }

    public List<Patient> getAllPatients() {
        return repository.fetchPatients();
    }
}
