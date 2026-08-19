# Write your MySQL query statement below
# Write your MySQL query statement below
select m.name from Employee as e join Employee as m on e.managerId=m.id group by m.id having COUNT(m.id)>=5;