class Solution {
public:
    int reverse(int n){
        int rev=0;
        while(n){
           rev=rev*10+n%10;
            n/=10;
        }
        return rev;
    }
    int countNicePairs(vector<int>& nums) {
      map<int,int> mp;
      int ans=0;
      int mod=1e9+7;
      for(int i=0;i<nums.size();i++){
        
          int diff=nums[i]-reverse(nums[i]);
          
          if(mp.find(diff)!=mp.end()) //(mp.count(diff)==true)
              
             ans=(ans+mp[diff])%mod;
            mp[diff]++;
      }
      return ans;
    }
};
