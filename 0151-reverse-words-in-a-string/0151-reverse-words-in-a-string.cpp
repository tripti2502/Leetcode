class Solution {
public:
    string reverseWords(string s) {
        string word;
        string ans;
        int n=s.size();
        int i=0;
        while(i<n){
            while(i<n && s[i]==' ') i++;
            if(i>=n) break;
            int j=i+1; 
            while(j<n && s[j]!=' ') 
                j++;
             word=s.substr(i, j-i);
            if(ans.size()==0) ans=word;
            else
                ans=word+" "+ans;
            i=j+1;
        }
        return ans;
    }
};