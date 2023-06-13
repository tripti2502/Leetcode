class Solution {
    private:
    bool f(string &s, int i, int j){
        while(i<j){
        if(s[i]!=s[j]) return false;
        else
            i++;
        j--;
        }
        return true;
    }
public:
    string longestPalindrome(string s) {
        int n=s.size();
        int index=0;
        int max_len=0;
        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                if(f(s,i,j)){
                if(j-i+1>max_len){
                    max_len=j-i+1;
                index=i;
                }
                }
            }
        }
        return s.substr(index, max_len);
    }
};