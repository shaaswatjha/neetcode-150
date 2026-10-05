// https://leetcode.com/problems/longest-substring-without-repeating-characters/

#include <iostream>
#include <unordered_set>

class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        std::unordered_set<char> uset;
        int left = 0;
        int maxLength = 0;

        int arrLength = static_cast<int>(s.size());

        for (int right = 0; right < arrLength; ++right) {
            while (uset.find(s[right]) != uset.end()) {
                uset.erase(s[left]);
                left++;
            }
            uset.insert(s[right]);
            maxLength = std::max(maxLength, right - left + 1);
        }

        return maxLength;
    }
};
