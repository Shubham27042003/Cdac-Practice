package com.example.hospital.model;

import jakarta.validation.constraints.Min;
import jakarta.validation.constraints.NotBlank;
import jakarta.validation.constraints.NotNull;
import lombok.*;


@AllArgsConstructor
@NoArgsConstructor
public class Patient {

    private Integer patientId;

    @NotBlank(message = "Name cannot be blank")
    private String name;

    @NotNull(message = "Age is required")
    @Min(value = 1, message = "Age must be positive")
    private Integer age;

    private Integer riskId;
    private String riskName;

    public Integer getPatientId() {
        return patientId;
    }

    public void setPatientId(Integer patientId) {
        this.patientId = patientId;
    }

    public @NotBlank(message = "Name cannot be blank") String getName() {
        return name;
    }

    public void setName(@NotBlank(message = "Name cannot be blank") String name) {
        this.name = name;
    }

    public @NotNull(message = "Age is required") @Min(value = 1, message = "Age must be positive") Integer getAge() {
        return age;
    }

    public void setAge(@NotNull(message = "Age is required") @Min(value = 1, message = "Age must be positive") Integer age) {
        this.age = age;
    }

    public Integer getRiskId() {
        return riskId;
    }

    public void setRiskId(Integer riskId) {
        this.riskId = riskId;
    }

    public String getRiskName() {
        return riskName;
    }

    public void setRiskName(String riskName) {
        this.riskName = riskName;
    }
}
