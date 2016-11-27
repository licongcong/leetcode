-- Author: Congcong Li
-- Mail: ling873495101@gmail.com
-- Time: Sun Nov 27 10:37:36 2016
-- Source: https://leetcode.com/problems/duplicate-emails/

-- Write a SQL query to find all duplicate emails in a table named Person.

-- +----+---------+
-- | Id | Email   |
-- +----+---------+
-- | 1  | a@b.com |
-- | 2  | c@d.com |
-- | 3  | a@b.com |
-- +----+---------+
-- For example, your query should return the following for the above table:

-- +---------+
-- | Email   |
-- +---------+
-- | a@b.com |
-- +---------+
-- Note: All emails are in lowercase.

# Write your MySQL query statement below
SELECT DISTINCT a.Email
From Person AS a, Person AS b
WHERE a.Email=b.Email AND a.Id != b.Id;

