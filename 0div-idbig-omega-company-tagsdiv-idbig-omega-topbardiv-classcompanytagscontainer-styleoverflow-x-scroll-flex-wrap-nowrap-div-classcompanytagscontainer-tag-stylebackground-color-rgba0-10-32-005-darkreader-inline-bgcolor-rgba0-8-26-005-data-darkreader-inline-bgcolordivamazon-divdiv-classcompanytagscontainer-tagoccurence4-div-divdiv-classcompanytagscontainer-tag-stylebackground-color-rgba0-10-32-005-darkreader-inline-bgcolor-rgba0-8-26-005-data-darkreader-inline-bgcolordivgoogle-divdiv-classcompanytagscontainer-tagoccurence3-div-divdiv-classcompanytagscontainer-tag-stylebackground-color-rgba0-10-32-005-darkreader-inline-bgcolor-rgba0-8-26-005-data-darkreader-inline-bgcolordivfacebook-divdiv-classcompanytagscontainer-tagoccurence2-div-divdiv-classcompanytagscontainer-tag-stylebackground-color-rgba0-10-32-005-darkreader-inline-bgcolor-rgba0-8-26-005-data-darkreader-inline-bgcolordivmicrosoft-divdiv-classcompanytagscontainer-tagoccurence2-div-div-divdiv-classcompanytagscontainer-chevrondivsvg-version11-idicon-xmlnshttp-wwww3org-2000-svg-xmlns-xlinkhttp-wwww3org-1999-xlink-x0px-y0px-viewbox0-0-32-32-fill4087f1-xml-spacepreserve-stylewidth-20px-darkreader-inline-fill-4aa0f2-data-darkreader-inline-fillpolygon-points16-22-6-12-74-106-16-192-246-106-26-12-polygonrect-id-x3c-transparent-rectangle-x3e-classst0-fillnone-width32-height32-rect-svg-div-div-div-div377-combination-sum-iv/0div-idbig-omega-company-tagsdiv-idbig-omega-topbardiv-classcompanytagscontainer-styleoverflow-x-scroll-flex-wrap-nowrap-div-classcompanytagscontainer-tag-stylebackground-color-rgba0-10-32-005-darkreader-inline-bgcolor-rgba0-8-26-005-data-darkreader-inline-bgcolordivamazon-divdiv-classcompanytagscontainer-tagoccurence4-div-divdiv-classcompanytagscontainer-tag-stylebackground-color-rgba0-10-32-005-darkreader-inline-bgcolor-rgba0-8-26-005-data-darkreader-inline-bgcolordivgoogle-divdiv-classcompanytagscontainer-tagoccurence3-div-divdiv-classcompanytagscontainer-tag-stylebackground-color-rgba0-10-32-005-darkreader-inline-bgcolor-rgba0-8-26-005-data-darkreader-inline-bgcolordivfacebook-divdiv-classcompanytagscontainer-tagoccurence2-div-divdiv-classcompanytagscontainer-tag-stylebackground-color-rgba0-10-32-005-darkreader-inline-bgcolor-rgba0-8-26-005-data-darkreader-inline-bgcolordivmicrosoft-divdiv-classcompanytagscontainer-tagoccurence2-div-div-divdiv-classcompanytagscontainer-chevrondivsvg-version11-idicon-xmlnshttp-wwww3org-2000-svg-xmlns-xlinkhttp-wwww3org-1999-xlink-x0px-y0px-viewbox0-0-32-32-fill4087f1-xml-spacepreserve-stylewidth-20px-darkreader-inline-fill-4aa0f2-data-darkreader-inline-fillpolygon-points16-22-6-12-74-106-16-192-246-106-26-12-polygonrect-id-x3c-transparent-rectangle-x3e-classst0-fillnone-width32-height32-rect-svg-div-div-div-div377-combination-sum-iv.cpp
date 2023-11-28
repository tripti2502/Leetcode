class Solution {
public:
    int f(vector<int>nums, int target, vector<int>&dp){
       if(target==0) return 1;
        if(target<0) return 0;
        if(dp[target]!=-1) return dp[target];
        int sum=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]<=target){
                sum+=f(nums,target-nums[i],dp);
            }
        }
        return dp[target]=sum;
        
    }
    int combinationSum4(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>dp(target+1,-1);
        return f(nums,target,dp);
    }
};




