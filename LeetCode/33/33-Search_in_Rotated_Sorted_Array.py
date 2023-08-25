class Solution(object):
    def search(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        length = len(nums)
        mid = length//2
        lower_index = 0
        upper_index = length-1
        

        while True:
            mid_value = nums[mid]

            if mid_value == target:
                return mid
            
            if upper_index == mid:
                if nums[lower_index] == target:
                    return lower_index
                else:
                    return -1
            
            if lower_index==mid:
                if nums[upper_index] == target:
                    return upper_index
                else:
                    return -1


            
            if mid_value < target and (target <= nums[upper_index] or mid_value>nums[upper_index]):
                lower_index = mid
                mid =  (upper_index+mid)//2
                
            elif mid_value < target and target > nums[upper_index]:
                upper_index = mid
                lower_index = 0
                mid = upper_index//2
                
            elif (nums[lower_index] <= target or nums[lower_index]> mid_value) and  target < mid_value:
                upper_index = mid
                mid = (mid+lower_index)//2
            
            elif nums[lower_index] > target and  target < mid_value:
                lower_index = mid
                upper_index == length-1
                mid = (lower_index+upper_index)//2