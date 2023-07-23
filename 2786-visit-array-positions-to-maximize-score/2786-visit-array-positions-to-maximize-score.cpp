int const N = 1e5;
class Solution {
public:
    // 0 even 1 odd
    long long dp[N+1][2];
    long long helper(int idx,int par,vector<int>& nums, int x){
        
        if(idx==nums.size()) return 0;
        if(dp[idx][par]!=-1) return dp[idx][par];
        long long notTake = helper(idx+1,par,nums,x);
            if(nums[idx]%2==par){
                long long take = nums[idx]+helper(idx+1,nums[idx]%2,nums,x);
                return dp[idx][par]=max(take,notTake);
            }else{
                long long take = nums[idx]+helper(idx+1,nums[idx]%2,nums,x)-x;
                return dp[idx][par]=max(take,notTake);
        }
        
    }
    long long maxScore(vector<int>& nums, int x) {
        memset(dp,-1,sizeof(dp));
        return nums[0]+helper(1,nums[0]%2,nums,x);
    }
};