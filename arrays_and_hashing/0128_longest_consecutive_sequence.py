# https://leetcode.com/problems/longest-consecutive-sequence/

class Solution:
    def longestConsecutive(self, nums: list[int]) -> int:
        num_set = set(nums)

        longest_subsequence_length = 0

        for num in nums:
            if num - 1 not in num_set:
                current_subsequence_length = 1

                while (num + current_subsequence_length) in num_set:
                    current_subsequence_length += 1

                longest_subsequence_length = max(
                    longest_subsequence_length,
                    current_subsequence_length
                )

        return longest_subsequence_length
