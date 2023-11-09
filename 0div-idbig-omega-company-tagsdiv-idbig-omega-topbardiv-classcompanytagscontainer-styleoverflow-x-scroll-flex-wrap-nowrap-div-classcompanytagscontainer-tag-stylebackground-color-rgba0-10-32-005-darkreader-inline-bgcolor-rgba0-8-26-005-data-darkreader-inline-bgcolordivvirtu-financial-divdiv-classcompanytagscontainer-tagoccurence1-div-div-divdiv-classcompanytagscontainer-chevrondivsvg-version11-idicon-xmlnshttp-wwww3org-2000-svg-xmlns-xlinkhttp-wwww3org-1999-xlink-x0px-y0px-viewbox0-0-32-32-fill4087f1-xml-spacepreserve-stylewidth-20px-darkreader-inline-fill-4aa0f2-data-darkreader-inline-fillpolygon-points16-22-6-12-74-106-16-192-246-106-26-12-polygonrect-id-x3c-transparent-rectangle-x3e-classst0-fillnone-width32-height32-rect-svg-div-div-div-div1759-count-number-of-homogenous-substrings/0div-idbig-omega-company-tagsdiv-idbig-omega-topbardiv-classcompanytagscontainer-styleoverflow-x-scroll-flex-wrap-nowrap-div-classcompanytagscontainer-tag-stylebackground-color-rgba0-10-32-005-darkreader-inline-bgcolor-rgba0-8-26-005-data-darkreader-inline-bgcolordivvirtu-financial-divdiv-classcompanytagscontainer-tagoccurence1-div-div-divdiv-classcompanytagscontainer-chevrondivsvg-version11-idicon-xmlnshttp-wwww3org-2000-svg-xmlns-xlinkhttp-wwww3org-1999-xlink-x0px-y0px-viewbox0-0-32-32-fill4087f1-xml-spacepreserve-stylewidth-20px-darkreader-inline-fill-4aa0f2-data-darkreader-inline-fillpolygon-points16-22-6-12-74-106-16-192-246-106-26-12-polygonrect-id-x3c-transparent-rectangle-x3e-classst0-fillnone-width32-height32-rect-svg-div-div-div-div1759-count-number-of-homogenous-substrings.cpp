class Solution {
public:
    int mod=1e9+7;
    int countHomogenous(string s) {
        int count=0;
        int sum=0;
        for(int i=0; i<s.size(); i++){
            if(i>0 && s[i-1]==s[i])
                count++;
            else
                count=1;
            sum=(sum+count)%mod;
        }
        return sum;
    }
};