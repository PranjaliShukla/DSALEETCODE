# Write your MySQL query statement below

select p.product_id , COALESCE(ROUND(SUM(p.price*u.units)/SUM(u.units),2),0) as average_price from Prices as p LEFT join UnitsSold as u ON p.product_id=u.product_id and u.purchase_date between p.start_date and p.end_date group by p.product_id;
//usintg where with left join acts as inner join