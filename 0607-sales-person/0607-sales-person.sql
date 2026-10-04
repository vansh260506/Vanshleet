# Write your MySQL query statement below
select s.name
from SalesPerson as s
WHERE s.sales_id NOT IN (
    SELECT o.sales_id
    from Orders as o
    left join Company as c
    on c.com_id = o.com_id
    where c.name = 'RED'
    );

