// https://leetcode.com/problems/valid-anagram/

#include <iostream>

class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        if (s.size() != t.size()) {
            return false;
        }

        int arr[26] = {0};

        for (char c: s) {
            arr[c - 'a']++;
        }
        for (char c: t) {
            arr[c - 'a']--;
        }

        for (int i: arr) {
            if (i != 0) {
                return false;
            }
        }
        return true;
    }
};