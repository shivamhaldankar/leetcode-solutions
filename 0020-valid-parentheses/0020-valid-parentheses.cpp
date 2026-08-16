#include<stack>
class Solution {
public:
    bool isValid(string expr) {
        stack<char> s;
        for(int i=0;i<expr.length();i++){
            if(expr[i]=='('||expr[i]=='['||expr[i]=='{')
            {
                s.push(expr[i]);
            }
            else if(expr[i]==')'||expr[i]==']'||expr[i]=='}'){
                if(s.empty()){
                    return false;
                }
                char top=s.top();
                if((expr[i]==')'&& top!='(')||(expr[i]==']'&& top!='[')||(expr[i]=='}'&& top!='{')){
                    return false;
                }
                s.pop();
            }
        }
        return s.empty();
    }
    
};