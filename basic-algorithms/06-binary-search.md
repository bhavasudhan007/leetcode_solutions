## Problem:

[Binary Search](Easy)

**Link:**
[LeetCode URL](https://leetcode.com/problems/binary-search/)

### Approach

Use binary search on the sorted array by maintaining left and right boundaries. Compare the middle element with the target and eliminate half of the remaining search space after each comparison.

### Complexity

* Time: O(log n)
* Space: O(1)

### Notes

Binary search only works correctly when the array is sorted. Using `left + (right - left) / 2` is a safer way to calculate the middle index and avoid potential inte
