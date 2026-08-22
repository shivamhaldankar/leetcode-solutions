class Solution:
    def myAtoi(self, s):
        i = 0
        sign = 1
        num = 0

        while i < len(s) and s[i] == ' ':
            i += 1

        if i < len(s) and (s[i] == '+' or s[i] == '-'):
            if s[i] == '-':
                sign = -1
            i += 1

        while i < len(s) and s[i].isdigit():
            num = num * 10 + int(s[i])
            i += 1

        num = num * sign

        if num > 2**31 - 1:
            return 2**31 - 1

        if num < -2**31:
            return -2**31

        return num