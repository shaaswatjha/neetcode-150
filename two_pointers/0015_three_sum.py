# https://leetcode.com/problems/3sum/

class Solution:
    def threeSum(self, nums: list[int]) -> list[list[int]]:
        result: list[list] = []

        nums.sort()

        for idx, num in enumerate(nums):
            if idx > 0 and num == nums[idx - 1]:
                continue

            left, right = idx + 1, len(nums) - 1

            while left < right:
                sum = nums[left] + nums[right] + num

                if sum > 0:
                    right -= 1
                elif sum < 0:
                    left += 1
                else:
                    result.append([num, nums[left], nums[right]])
                    left += 1
                    while nums[left] == nums[left - 1] and left < right:
                        left += 1

        return result
