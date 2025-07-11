/* Write your PL/SQL query statement below */
select max(num) as num
from (select * from MyNumbers group by num having count(*)=1);