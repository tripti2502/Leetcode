class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size(), canReach=0;
        for(int i=0;i<n;i++){
            if(canReach<i)
                return false;
            canReach=max(canReach,i+nums[i]);
        }
        return true;
    }
};