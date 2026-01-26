package com.example.hospital.model;

import jakarta.validation.constraints.NotBlank;
import lombok.*;

@AllArgsConstructor
@NoArgsConstructor
@Data
@Builder
public class Patient {

    private Integer patientId;

    @NotBlank(message = "Name cannot be blank")
    private String name;
    private Integer age;
    private Integer riskId;
    private String riskName;

}