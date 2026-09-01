class Solution(object):
    def findErrorNums(self, nums):
        n = len(nums)
        
        duplicate = sum(nums) - sum(set(nums))
        
        total = n * (n + 1) // 2
        missing = total - (sum(nums) - duplicate)
        
        return [duplicate, missing]