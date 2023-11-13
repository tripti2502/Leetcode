class Solution {
public:
    string makeSmallestPalindrome(string s) {
        string temp=s;
        reverse(temp.begin(),temp.end());
        string ans="";
        for(int i=0;i<temp.size();i++){
            if(temp[i]<=s[i])
            ans.push_back(temp[i]);//ans+=temp[i];
            else ans+=s[i];
        }
        return ans;
    }
};


