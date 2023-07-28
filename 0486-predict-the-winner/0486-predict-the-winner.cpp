class Solution {
    int func(int l,int r,vector<int>& nums, vector<vector<int>> &dp){
        if(l>r) return 0;
        if(l==r) return  nums[l]; 
        if(dp[l][r]!=-1) return dp[l][r];
        int ans=max(nums[l] + min(func(l+2,r,nums,dp),func(l+1,r-1,nums,dp)),nums[r] + min(func(l,r-2,nums,dp),func(l+1,r-1,nums,dp)));
        return dp[l][r]=ans;
    }
public:
    bool PredictTheWinner(vector<int>& nums) {
        int n=nums.size();
        int sum=accumulate(nums.begin(),nums.end(),0);
        vector<vector<int>> dp(n+1,vector<int> (n+1,-1));
        int ans=func(0,n-1,nums,dp);
        return ans>= sum-ans;
    }
};  