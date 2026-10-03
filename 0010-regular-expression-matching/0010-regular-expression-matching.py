class Solution(object):

    def isMatch(self, s, p):
        dp = {}

        def solve(i, j):
            if j == len(p):
                return i == len(s)

            if (i, j) in dp:
                return dp[(i, j)]

            match = i < len(s) and (p[j] == s[i] or p[j] == '.')

            if j + 1 < len(p) and p[j + 1] == '*':
                ans = solve(i, j + 2)

                if match:
                    ans = ans or solve(i + 1, j)
            else:
                ans = match and solve(i + 1, j + 1)

            dp[(i, j)] = ans
            return ans

        return solve(0, 0)