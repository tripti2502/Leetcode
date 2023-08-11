class Solution {
public:
   int helper(int idx,vector<int>& coins, int amount,vector<vector<int>> &dp){
        if(amount==0) return 1;
        if(idx>=coins.size()) return 0;
        if(dp[idx][amount]!=-1) return dp[idx][amount];
        int nt = helper(idx+1,coins,amount,dp);
        if(amount-coins[idx]>=0) nt+=helper(idx,coins,amount-coins[idx],dp);
        
        return dp[idx][amount]=nt;
        
    }
    int change(int amount, vector<int>& coins) {
        vector<vector<int>> dp(coins.size(),vector<int>(amount+1,-1));
        return helper(0,coins,amount,dp); 
    }
};