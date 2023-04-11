https://leetcode.com/problems/count-elements-with-strictly-smaller-and-greater-elements/

class Solution(object):
    def countElements(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        nums.sort()
        if(min(nums)!=max(nums)):
            x=len(nums)-nums.count(min(nums))-nums.count(max(nums))
            return x
        else:
            return 0
        