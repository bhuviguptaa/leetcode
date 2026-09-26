# Write your MySQL query statement below
select Person.firstName, Person.lastName, Address.City, Address.state
FROM Person
LEFT JOIN Address
ON Person.PersonID=Address.personID