class Solution {
public:
    int f(vector<int>& nums, int target,int ind,int n)
    {
        if(ind>=n){
            if(target==0) return 1;
            else return 0;
    }
        int add=f(nums,target-nums[ind],ind+1,n);
        int sub=f(nums,target+nums[ind],ind+1,n);
        return add+sub;
    }
    int findTargetSumWays(vector<int>& nums, int target)
    {
        int n=nums.size();
        return f(nums,target,0,n);
    }
};