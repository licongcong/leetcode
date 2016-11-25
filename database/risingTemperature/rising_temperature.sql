-- Author: Congcong Li
-- Mail: ling873495101@gmail.com
-- Time: Fri Nov 25 15:59:22 2016
-- Source: https://leetcode.com/problems/rising-temperature/

-- Given a Weather table, write a SQL query to find all dates' Ids with higher
-- temperature compared to its previous (yesterday's) dates.

-- +---------+------------+------------------+
-- | Id(INT) | Date(DATE) | Temperature(INT) |
-- +---------+------------+------------------+
-- |       1 | 2015-01-01 |               10 |
-- |       2 | 2015-01-02 |               25 |
-- |       3 | 2015-01-03 |               20 |
-- |       4 | 2015-01-04 |               30 |
-- +---------+------------+------------------+
-- For example, return the following Ids for the above Weather table:
-- +----+
-- | Id |
-- +----+
-- |  2 |
-- |  4 |
-- +----+

# Write your MySQL query statement below
SELECT today.Id
FROM Weather AS yesterday, Weather AS today
WHERE DATEDIFF(today.Date, yesterday.Date)=1 AND
    today.Temperature > yesterday.Temperature;
