## Problem:

[Move Zeroes](Easy)

**Link:**
[LeetCode URL](https://leetcode.com/problems/move-zeroes/)

### Approach

Use a two-pointer technique where `i` scans the array and `j` tracks the position for the next non-zero element. Swap each non-zero element into position `j`, which keeps the non-zero elements in their original order and moves all zeroes to the end.

### Complexity

* Time: O(n)
* Space: O(1)

### Notes

The order of non-zero elements must remain unchanged. The solution modifies the array in-place without using an extra array.
