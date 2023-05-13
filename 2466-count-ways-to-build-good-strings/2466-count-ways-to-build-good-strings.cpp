class Solution {
    int mod=1e9+7;
    long long func(int l,int h,int z,int o,long long count,vector<int> &dp ){
      if(count>=h) return 0;
      if(dp[count]!=-1) return dp[count];
      long long ze=func(l,h,z,o,count+z,dp)%mod;
      if(count+z>=l && count+z<=h) ze+=1;
      long long one=func(l,h,z,o,count+o,dp)%mod;
if(count+o >=l && count+o<=h) one+=1;
      return dp[count]=(ze+one)%mod;
    }
public:
    int countGoodStrings(int low, int high, int zero, int one) {
       long long count=0;
       vector<int> dp(high+1,-1);
        return func(low,high,zero,one,count,dp);
    }
};