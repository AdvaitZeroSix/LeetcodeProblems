class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        nums=[]
        nums=nums1+nums2
        nums.sort()
        n=len(nums)
        if n%2==0:
            return (float)(nums[(n//2)-1]+nums[n//2])/2
        else:
            return nums[(n//2)]

        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: float
        """
        
