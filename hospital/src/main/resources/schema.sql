CREATE TABLE risk_level (
    risk_id SERIAL PRIMARY KEY,
    risk_name VARCHAR(20) NOT NULL UNIQUE
);

CREATE TABLE patient (
    patient_id SERIAL PRIMARY KEY,
    name VARCHAR(100) NOT NULL,
    age INT NOT NULL,
    risk_id INT,
    CONSTRAINT fk_risk FOREIGN KEY (risk_id)
    REFERENCES risk_level(risk_id)
);
