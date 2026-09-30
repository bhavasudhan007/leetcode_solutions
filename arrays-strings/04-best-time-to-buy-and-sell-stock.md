## Problem:

[Best Time to Buy and Sell Stock](Easy)

**Link:**
[LeetCode URL](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/)

### Approach

Track the minimum stock price seen so far and calculate the profit if selling on each day. Keep updating the maximum profit, giving an `O(n)` one-pass solution.

### Complexity

* Time: O(n)
* Space: O(1)

### Notes

You must buy before selling, so only prices seen earlier can be used as the buying price. If prices continuously decrease, the maximum profit remains `0`.
