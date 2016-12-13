-- Author: Congcong Li
-- Mail: licongcongcn@gmail.com
-- Time: Thu Nov 24 08:50:07 2016
-- Source: https://leetcode.com/problems/employees-earning-more-than-their-managers/

-- The Employee table holds all employees including their managers. Every
-- employee has an Id, and there is also a column for the manager Id.

-- +----+-------+--------+-----------+
-- | Id | Name  | Salary | ManagerId |
-- +----+-------+--------+-----------+
-- | 1  | Joe   | 70000  | 3         |
-- | 2  | Henry | 80000  | 4         |
-- | 3  | Sam   | 60000  | NULL      |
-- | 4  | Max   | 90000  | NULL      |
-- +----+-------+--------+-----------+
-- Given the Employee table, write a SQL query that finds out employees who earn
-- more than their managers. For the above table, Joe is the only employee who
-- earns more than his manager.

-- +----------+
-- | Employee |
-- +----------+
-- | Joe      |
-- +----------+

# Write your MySQL query statement below
SELECT employee.Name AS Employee
From Employee AS employee, Employee AS manager
WHERE manager.Id = employee.ManagerId AND employee.Salary > manager.Salary;
