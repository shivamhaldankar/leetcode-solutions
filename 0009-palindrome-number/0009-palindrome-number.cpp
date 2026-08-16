class Solution {
public:
    bool isPalindrome(int x) {
        long long rev=0,rem=0;
        int original=x;
        if(x<0)
        {
            return false;
        }
        while(x>0){
            rem=x%10;
            rev=rev*10+rem;
            x=x/10;
        }
            return rev==original;
    }
};