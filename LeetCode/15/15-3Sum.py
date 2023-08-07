class Solution(object):
    def threeSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        result = []
        nums_length = len(nums)
        triplets = set()

        for i in range(nums_length - 2):
            i_value = nums[i]
            for j in range(i + 1, nums_length - 1):
                j_value = nums[j]
                for k in range(j + 1, nums_length):
                    k_value = nums[k]

                    tmp = ''.join(map(str, sorted([i_value, j_value, k_value])))

                    if i_value + j_value + k_value == 0 and tmp not in triplets:
                        triplets.add(tmp)
                        result.append([i_value, j_value, k_value])

        return result