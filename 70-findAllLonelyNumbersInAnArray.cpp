https://leetcode.com/problems/find-all-lonely-numbers-in-the-array/

class Solution(object):
    def findLonely(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        x=max(nums)
        a=[]
        z=[]
        for i in range(x+2):
            a.append(0)
        for i in nums:
            a[i]+=1
        for i in range(x+1):
            if(a[i]==1 and (a[i+1]==0 and a[i-1]==0)):
                z.append(i)
        return z
                
            
            
        