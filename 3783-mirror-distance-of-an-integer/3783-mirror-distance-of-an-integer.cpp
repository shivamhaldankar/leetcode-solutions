class Solution {
public:
    int mirrorDistance(int n) {
        long long x = n, y = 0;
        while (x > 0) {
            y = y * 10 + x % 10;
            x /= 10;
        }
        return abs((long long)n - y);
    }
};