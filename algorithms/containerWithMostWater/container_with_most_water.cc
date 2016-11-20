// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: ling873495101@gmail.com
// Time: Sun Nov 20 17:08:48 2016
// Source: https://leetcode.com/problems/container-with-most-water/

// Given n non-negative integers a1, a2, ..., an, where each represents a point
// at coordinate (i, ai). n vertical lines are drawn such that the two endpoints
// of line i is at (i, ai) and (i, 0). Find two lines, which together with
// x-axis forms a container, such that the container contains the most water.

// Note: You may not slant the container.

class Solution {
 public:
  int maxArea(vector<int>& height) {
    int i = 0;
    int j = height.size()-1;
    int max_area = 0;
    int curr_area = 0;
    while (i < j) {
      curr_area = min(height[i], height[j]) * (j-i);
      max_area = max(max_area, curr_area);

      if (height[j] < height[i]) j--;
      else
        i++;
    }
    return max_area;
  }
};
