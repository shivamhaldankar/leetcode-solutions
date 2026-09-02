class Solution(object):
    def closestTarget(self, words, target, startIndex):
        n = len(words)
        ans = n
        for i in range(n):
            if words[i] == target:
                distance = abs(i - startIndex)
                distance = min(distance, n - distance)
                ans = min(ans, distance)
        if ans == n:
            return -1
        return ans