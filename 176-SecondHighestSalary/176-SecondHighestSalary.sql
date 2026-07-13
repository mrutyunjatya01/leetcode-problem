-- Last updated: 13/07/2026, 16:17:28
# Write your MySQL query statement below
-- SELECT MAX(salary) AS SecondHighestSalary
-- FROM Employee
-- WHERE salary < (SELECT MAX(salary) FROM Employee);

select (
select  distinct salary  from Employee  
order by salary desc limit  1,1 
) as SecondHighestSalary;