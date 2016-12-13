# Copyright 2016 <lee>
# Author: Congcong Li
# Mail: licongcongcn@gmail.com
# Time: Fri Nov 18 11:41:02 2016
# Source: https://leetcode.com/problems/reverse-words-in-a-string/

# Given an input string, reverse the string word by word.

# For example,
# Given s = "the sky is blue",
# return "blue is sky the".

# Update (2015-02-12):
# For C programmers: Try to solve it in-place in O(1) space.

class Solution(object):
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        arr = s.split()
        return ' '.join(arr[::-1])

