# Write your MySQL query statement below
select e.employee_id,e.name, count(m.reports_to) as reports_count,round(avg(m.age)) as average_age
from Employees e join employees m on e.employee_id=m.reports_to
GROUP BY e.employee_id, e.name
order by e.employee_id asc
