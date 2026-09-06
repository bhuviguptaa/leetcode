# Write your MySQL query statement below
UPDATE salary 
SET sex = CASE
WHEN sex = 'm' Then 'f'
WHEN sex = 'f' THEN 'm'
END;