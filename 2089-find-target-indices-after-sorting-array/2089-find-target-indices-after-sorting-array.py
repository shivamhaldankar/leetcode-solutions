class Solution(object):
    def targetIndices(self, nums, target):
        nums1=sorted(nums)
        l=[]
        for i in range(len(nums)):
            if nums1[i]==target:
                l.append(i)
        return l
        