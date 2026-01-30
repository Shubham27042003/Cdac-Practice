package com.example.hospital.controller;

import com.example.hospital.model.Patient;
import com.example.hospital.response.ApiResponse;
import com.example.hospital.service.PatientService;
import io.swagger.v3.oas.annotations.Operation;
import io.swagger.v3.oas.annotations.Operation;
import io.swagger.v3.oas.annotations.responses.ApiResponses;
import io.swagger.v3.oas.annotations.tags.Tag;
import jakarta.validation.Valid;
import lombok.extern.slf4j.Slf4j;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.*;

import java.util.List;

@RestController
@RequestMapping("/api/patients")
@Tag(name = "Patient API", description = "Patient Management APIs")
public class PatientController {

    @Autowired
    private PatientService service;

    @PostMapping
    public ResponseEntity<ApiResponse<Void>> addPatient(@Valid @RequestBody Patient patient) {
        service.addPatient(patient);
        return ResponseEntity.ok(new ApiResponse<>(200, true, "Patient added successfully", null)
        );
    }

    @GetMapping
    public ResponseEntity<ApiResponse<List<Patient>>> getPatients() {
        return ResponseEntity.ok(new ApiResponse<>(200, true, "Patients fetched", service.getAllPatients())
        );
    }

    @GetMapping("/{id}")
    public ResponseEntity<ApiResponse<Patient>> getPatientById(@PathVariable int id) {
        return ResponseEntity.ok(new ApiResponse<>(200, true, "Patient fetched", service.getPatientById(id))
        );
    }

    @PutMapping("/{id}")
    public ResponseEntity<ApiResponse<Void>> updatePatient(
            @PathVariable int id, @Valid @RequestBody Patient patient) {
        service.updatePatient(id, patient);
        return ResponseEntity.ok(new ApiResponse<>(200, true, "Patient updated", null)
        );
    }

    @PatchMapping("/{id}")
    public ResponseEntity<ApiResponse<Void>> patchPatient(
            @PathVariable int id, @RequestBody Patient patient) {
        service.patchPatient(id, patient);
        return ResponseEntity.ok(new ApiResponse<>(200, true, "Patient partially updated", null)
        );
    }

    @DeleteMapping("/{id}")
    public ResponseEntity<ApiResponse<Void>> deletePatient(@PathVariable int id) {
        service.deletePatient(id);
        return ResponseEntity.ok(new ApiResponse<>(200, true, "Patient deleted", null)
        );
    }
}
