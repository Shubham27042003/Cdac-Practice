package com.example.hospital.controller;

import com.example.hospital.model.Patient;
import com.example.hospital.service.PatientService;
import io.swagger.v3.oas.annotations.Operation;
import io.swagger.v3.oas.annotations.responses.ApiResponse;
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
@Slf4j
@Tag(name = "Patient API", description = "Patient Management APIs")
public class PatientController {

    @Autowired
    private PatientService service;

    @Operation(summary = "Add Patient")
    @ApiResponses({
            @ApiResponse(responseCode = "200", description = "Patient added"),
            @ApiResponse(responseCode = "400", description = "Validation error"),
            @ApiResponse(responseCode = "500", description = "Server error")
    })
    @PostMapping
    public ResponseEntity<String> addPatient(@Valid @RequestBody Patient patient) {
        service.addPatient(patient);
        return ResponseEntity.ok("Patient added successfully");
    }

    @Operation(summary = "Fetch Patients with Risk Level")
    @GetMapping
    public ResponseEntity<List<Patient>> getPatients() {
        return ResponseEntity.ok(service.getAllPatients());
    }

    @PutMapping("/{id}")
    public ResponseEntity<String> updatePatient(@PathVariable int id) {
        return ResponseEntity.ok("PUT API called");
    }

    @PatchMapping("/{id}")
    public ResponseEntity<String> patchPatient(@PathVariable int id) {
        return ResponseEntity.ok("PATCH API called");
    }

    @DeleteMapping("/{id}")
    public ResponseEntity<String> deletePatient(@PathVariable int id) {
        return ResponseEntity.ok("DELETE API called");
    }
}