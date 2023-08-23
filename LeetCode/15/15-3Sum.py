class Solution(object):
    def threeSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        nums_length = len(nums)
        nums.sort()
        triplets = set()

        for i_index in range(nums_length):
            j_index = i_index + 1
            k_index = nums_length - 1

            while j_index < k_index :
                _sum = nums[i_index] + nums[j_index] + nums[k_index]
                if _sum == 0 :
                    triplets.add((nums[i_index], nums[j_index], nums[k_index]))
                    j_index+=1
                    k_index-=1
                elif _sum > 0 : 
                    k_index-=1
                else:
                    j_index+=1

        return list(triplets)