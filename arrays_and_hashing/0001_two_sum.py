# https://leetcode.com/problems/two-sum/

class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        index = {}
        for idx, num in enumerate(nums):
            complement = target - num

            if complement in index:
                return [index[complement], idx]

            index[num] = idx

        return []
