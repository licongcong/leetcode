// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: licongcongcn@gmail.com
// Time: Sat Dec 24 13:18:27 2016
// Source: https://leetcode.com/problems/island-perimeter/

// You are given a map in form of a two-dimensional integer grid where 1
// represents land and 0 represents water. Grid cells are connected
// horizontally/vertically (not diagonally). The grid is completely surrounded
// by water, and there is exactly one island (i.e., one or more connected land
// cells). The island doesn't have "lakes" (water inside that isn't connected
// to the water around the island). One cell is a square with side length 1.
// The grid is rectangular, width and height don't exceed 100. Determine the
// perimeter of the island.

// Example:

// [[0,1,0,0],
//  [1,1,1,0],
//  [0,1,0,0],
//  [1,1,0,0]]

// Answer: 16


class Solution {
 public:
  int islandPerimeter(vector<vector<int>>& grid) {
    int land = 0;
    int connection = 0;
    for (int i=0; i < grid.size(); i++) {
      for (int j=0; j < grid[i].size(); j++) {
        if (grid[i][j]) {
          land++;
          if (i && grid[i-1][j]) connection++;
          if (j && grid[i][j-1]) connection++;
        }
      }
    }
    return 4*land - 2*connection;
  }
};
