# 02 — Reverse String

**LeetCode Problem:** Reverse String
**Language:** C
**Topic:** Arrays, Strings, Two Pointers

## Problem

Write a function that reverses a string in-place.

The input is given as a character array, and the string must be modified directly without creating another array.




## Approach

Use the **two-pointer technique**:

* Start one pointer at the beginning.
* Start another pointer at the end.
* Swap the characters.
* Move both pointers toward the center.
* Continue until the middle is reached.

### Example

```text
Input:  ["h","e","l","l","o"]

Swap h ↔ o
Swap e ↔ l

Output: ["o","l","l","e","h"]
```

## Complexity

* **Time:** `O(n)`
* **Space:** `O(1)`

The solution reverses the string **in-place**, so no additional array is required.

## Key Concept

The important idea is to swap:

```text
s[i] ↔ s[sSize - 1 - i]
```

This allows the string to be reversed using constant extra space.
