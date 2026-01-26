package com.example.hospital.model;

import lombok.AllArgsConstructor;
import lombok.Data;
import lombok.NoArgsConstructor;

@Data
@AllArgsConstructor
@NoArgsConstructor
public class RiskLevel {
    private Integer riskId;
    private String riskName;
}
