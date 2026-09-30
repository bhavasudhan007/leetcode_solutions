## Problem:

[Longest Common Prefix](Easy)

**Link:**
[LeetCode URL](https://leetcode.com/problems/longest-common-prefix/)

### Approach

Compare every string with the first string and keep track of the matching prefix length. Reduce the prefix length whenever characters differ, so only the common prefix remains.

### Complexity

* Time: O(n × m)
* Space: O(1)

### Notes

If the first string is empty or there is no common character, the result is an empty string. The prefix can only be as long as the shortest string.
