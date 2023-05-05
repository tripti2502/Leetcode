class Solution {
public:
    int maxVowels(string s, int k) {
        int maxCount=0;
        int count=0;
        int j=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u') count++;
            if(i-k>=0){
               if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u') count--; 
               j++;
            }
            maxCount=max(count,maxCount);
        }
        return maxCount;
    }
};