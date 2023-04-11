https://leetcode.com/problems/peak-index-in-a-mountain-array/


class Solution:
    def peakIndexInMountainArray(self, arr: List[int]) -> int:
        x=max(arr)
        return arr.index(x)