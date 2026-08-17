class Solution {
public:
    string longestPalindrome(string s) {
        string ans = "";
        for(int i = 0; i < s.length(); i++) {
            for(int j = i; j < s.length(); j++) {
                int l = i;
                int r = j;
                int flag = 1;
                while(l < r) {
                    if(s[l] != s[r]) {
                        flag = 0;
                        break;
                    }
                    l++;
                    r--;
                }
                if(flag == 1 && j - i + 1 > ans.length()) {
                    ans = s.substr(i, j - i + 1);
                }
            }
        }
        return ans;
    }
};