class Solution(object):
    def minimumDeletions(self, nums):
        n = len(nums)

        a = nums.index(min(nums))
        b = nums.index(max(nums))

        left = max(a, b) + 1
        right = n - min(a, b)
        both = min(a, b) + 1 + n - max(a, b)

        return min(left, right, both)