// https://leetcode.com/problems/longest-consecutive-sequence/

#include <unordered_set>
#include <vector>

class Solution {
public:
    int longestConsecutive(std::vector<int>& nums) {
        std::unordered_set<int> uset;

        for (const int& num: nums) {
            uset.insert(num);
        }

        int longestSubsequenceLength = 0;

        for (const int& num: nums) {
            if (uset.find(num - 1) == uset.end()) {
                int currentSequenceLength = 1;

                while (uset.find(num + currentSequenceLength) != uset.end()) {
                    currentSequenceLength++;
                }

                longestSubsequenceLength = std::max(
                    longestSubsequenceLength,
                    currentSequenceLength
                );
            }
        }

        return longestSubsequenceLength;
    }
};
