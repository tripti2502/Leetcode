class Solution {
public:
    int partitionString(string s) {
        unordered_map<char,int>mp;
        int ans=1;
        for(int i=0; i<s.size(); i++){
            if(mp.count(s[i])){
                ans++;
                mp.clear();
            }
            mp[s[i]]=i;
        }
        return ans;
    }
};