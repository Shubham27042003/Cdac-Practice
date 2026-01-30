package com.example.hospital.response;

import lombok.AllArgsConstructor;
import lombok.Data;
import lombok.NoArgsConstructor;

@Data
@NoArgsConstructor
public class ApiResponse<T> {

    private int status;
    private boolean success;
    private String message;
    private T data;

    public ApiResponse(int status, boolean success, String message, T data) {
        this.status = status;
        this.success = success;
        this.message = message;
        this.data = data;
    }

    // getters & setters
}