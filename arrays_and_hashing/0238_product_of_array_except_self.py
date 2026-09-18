# 0238_product_of_array_except_self

class Solution:
    def productExceptSelf(self, nums: list[int]) -> list[int]:
        result = []

        prefixResult = 1
        result.append(prefixResult)

        for i in range(len(nums) - 1):
            prefixResult *= nums[i]
            result.append(prefixResult)

        postfixResult = 1

        for j in range(len(nums) - 1, 0, -1):
            postfixResult *= nums[j]
            result[j - 1] *= postfixResult

        return result
