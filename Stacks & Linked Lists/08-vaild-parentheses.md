## Problem:

[Valid Parentheses](Easy)

**Link:**
[LeetCode URL](https://leetcode.com/problems/valid-parentheses/)

### Approach

Use a stack to store opening brackets as they appear. For every closing bracket, check whether it matches the most recently opened bracket; at the end, the stack must be empty for the string to be valid.

### Complexity

* Time: O(n)
* Space: O(n)

### Notes

The stack follows **LIFO (Last In, First Out)**, which is why it works naturally for nested brackets. An empty stack before a closing bracket or a mismatched pair makes the string invalid.
