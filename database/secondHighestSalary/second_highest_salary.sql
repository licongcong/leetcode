-- Author: Congcong Li
-- Mail: licongcongcn@gmail.com
-- Time: Sun Nov 27 11:50:02 2016
-- Source: https://leetcode.com/problems/second-highest-salary/

-- Write a SQL query to get the second highest salary from the Employee table.

-- +----+--------+
-- | Id | Salary |
-- +----+--------+
-- | 1  | 100    |
-- | 2  | 200    |
-- | 3  | 300    |
-- +----+--------+
-- For example, given the above Employee table, the second highest salary is 200.
-- If there is no second highest salary, then the query should return null.

# Write your MySQL query statement below
SELECT MAX(Salary) AS SecondHighestSalary
FROM Employee
WHERE Salary < (SELECT MAX(Salary)
    FROM Employee);
