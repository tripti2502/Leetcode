class Solution {
public:
    int helper(int idx,int prev,vector<int>& nums,vector<vector<int>> &dp){
        if(idx==0) return 0;
        if(dp[idx][prev]!=-1) return dp[idx][prev];
        int notTake = helper(idx-1,prev,nums,dp);
        int take = 0;
        if(prev==nums.size()+1 || nums[idx-1]<nums[prev-1]){
            take = 1+helper(idx-1,idx,nums,dp);
        }
        return dp[idx][prev]=max(take,notTake);
    }
    int lengthOfLIS(vector<int>& nums) {
        vector<vector<int>> dp(nums.size()+1,vector<int>(nums.size()+2,0));
        for(int idx=1;idx<=nums.size();idx++){
            for(int prev=1;prev<=nums.size()+1;prev++){
                int notTake = dp[idx-1][prev];
                int take = 0;
                if(prev==nums.size()+1 || nums[idx-1]<nums[prev-1]){
                    take = 1+dp[idx-1][idx];
                }
                dp[idx][prev]=max(take,notTake);        
            }
        }
        
        return dp[nums.size()][nums.size()+1];
        return helper(nums.size(),nums.size()+1,nums,dp);
    }
};