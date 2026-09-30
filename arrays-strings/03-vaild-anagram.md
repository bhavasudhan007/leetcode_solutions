# 03 — Valid Anagram

**LeetCode:** #242
**Language:** C
**Topic:** Strings, Arrays, Hashing

## Problem

Given two strings `s` and `t`, determine whether `t` is an anagram of `s`.

An anagram contains the **same characters with the same frequency**, but the order can be different.

## Approach

Use an integer array of size `26` to store the frequency of each lowercase letter.

* Increase the count for every character in `s`.
* Decrease the count for every character in `t`.
* If all counts become `0`, the strings are anagrams.
* If any count is not `0`, they are not anagrams.


## Example

```text
Input:
s = "anagram"
t = "nagaram"

Output:
true
```

```text
Input:
s = "rat"
t = "car"

Output:
false
```

## Complexity

* **Time:** `O(n)`
* **Space:** `O(1)`

Since the frequency array always contains only 26 elements, the extra space is constant.

## Key Concept

The important idea is **frequency counting**:

```text
s → increase character count
t → decrease character count
```

If both strings contain exactly the same characters with the same frequencies, every count will be `0`.
