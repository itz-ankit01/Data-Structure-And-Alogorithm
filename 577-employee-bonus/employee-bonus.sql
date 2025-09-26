# Write your MySQL query statement below
select name , bonus 
from Employee
left join Bonus
    on employee.empid = bonus.empid
where bonus is null or bonus < 1000;