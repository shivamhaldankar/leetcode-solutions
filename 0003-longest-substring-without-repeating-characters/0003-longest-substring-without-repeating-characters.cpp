class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        for(int i = 0; i < s.length(); i++) {
            int flag[256] = {0};
            int count = 0;
            for(int j = i; j < s.length(); j++) {
                if(flag[s[j]] == 1)
                    break;
                flag[s[j]] = 1;
                count++;
                if(count > ans)
                    ans = count;
            }
        }
        return ans;
    }
};