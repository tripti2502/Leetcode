class Solution {
public:
    string finalString(string s) {
        string temp;
        for(int i=0;i<s.size();i++){
            if(s[i]!='i') temp+=s[i];
            else reverse(temp.begin(),temp.end());
        }
        return temp;
    }
};