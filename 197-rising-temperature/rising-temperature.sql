# Write your MySQL query statement below
select curr_w.id
from weather curr_w
join weather prev_w
    on DATEDIFF(curr_w.recordDate, prev_w.recordDate) = 1 
where prev_w.temperature < curr_w.temperature