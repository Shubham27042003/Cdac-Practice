package com.example.hospital.config;

import io.swagger.v3.oas.models.OpenAPI;
import io.swagger.v3.oas.models.info.Contact;
import io.swagger.v3.oas.models.info.Info;
import org.springframework.context.annotation.Bean;
import org.springframework.context.annotation.Configuration;

@Configuration
public class SwaggerConfig {

    @Bean
    public OpenAPI hospitalOpenAPI() {

        return new OpenAPI()
                .info(new Info()
                        .title("Hospital Management System API")
                        .description("REST APIs for Hospital Management using Spring Boot & Swagger")
                        .version("1.0.0")
                        .contact(new Contact()
                                .name("Shubham Lanke")
                                .email("shubham.lanke@zensar.com")
                                .url("https://github.com/shubham27042003")
                        )
                );
    }
}
