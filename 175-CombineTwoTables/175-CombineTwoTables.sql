-- Last updated: 13/07/2026, 16:17:30
# Write your MySQL query statement below
select  firstName , lastName ,  city ,  state 
from Person 
left join Address 
on
Person.personId = Address.personId