class Solution {
public:
    int maxSubArray(vector<int> &nums) {
        int TotalMaxSum = nums[0];
        int currMaxSum = nums[0];
        
        for (int i = 1; i < nums.size(); i++) {
            
            currMaxSum = max(currMaxSum + nums[i], nums[i]);
            TotalMaxSum = max(TotalMaxSum, currMaxSum);
            
        }
        return TotalMaxSum;
    }
};
