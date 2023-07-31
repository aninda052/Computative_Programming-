class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """

        num_lenght = len(nums)
        for idx_i, i in enumerate(nums):
            for idx_j in range(idx_i +1, num_lenght):
                if i + nums[idx_j] == target:
                    return [idx_i, idx_j]