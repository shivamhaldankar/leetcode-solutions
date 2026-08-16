class Solution {
public:
    int longestValidParentheses(string s) {
        int n = s.size();
        stack<int> st;
        for(int i = 0; i<n; i++){
            if(s[i]=='('){
                st.push(i);
            }
            else {
                if(!st.empty()){
                    if(s[st.top()]=='(')
                        st.pop();
                    else st.push(i);
                }
                else st.push(i);
            }
        }
        if(st.empty())return n;
        int ans = 0;           int end = n-1;
        while(!st.empty()){
            int t = st.top();st.pop();
 
            ans = max(end - t, ans);
            end = t-1;
        }
        ans = max(ans, end+1);
        return ans;
    }
};