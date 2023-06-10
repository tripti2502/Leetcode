class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans="";
        int count=0;
        for(char ch : s){
            if(ch=='(' && count++ > 0){
                ans+=ch;
            }
            if(ch==')' && count-- > 1){
                ans+=ch;
            }
        }
        return ans;
    
    }
};