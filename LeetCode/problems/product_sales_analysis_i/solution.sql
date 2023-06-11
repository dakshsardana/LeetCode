# Write your MySQL query statement below
select p.product_name,s.year,s.price from sales s
left join product p
using(product_id)



# select eu.unique_id,e.name from employees e
# left join employeeuni eu
# using(id)