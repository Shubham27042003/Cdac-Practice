INSERT INTO risk_level (risk_name)
VALUES 
    ('LOW'), 
    ('MEDIUM'), 
    ('HIGH');

INSERT INTO patient (name, age, risk_id)
VALUES 
    ('Rahul', 25, 1),
    ('Sneha', 45, 3);
