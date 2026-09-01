class Solution(object):
    def getMinDistance(self, nums, target, start):
        ans = len(nums)

        for i in range(len(nums)):
            if nums[i] == target:
                ans = min(ans, abs(i - start))

        return ans