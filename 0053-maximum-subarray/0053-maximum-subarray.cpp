class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int totalSum=nums[0];
        int currSum=nums[0];
        
        for(int i=1; i<nums.size(); i++){
            currSum=max(currSum+nums[i], nums[i]);
            totalSum=max(totalSum, currSum);
        }
        
        return totalSum;
    }
//         int maxi = INT_MIN; // maximum sum
//         int n=nums.size();

//     for (int i = 0; i < n; i++) {
//         for (int j = i; j < n; j++) {
//             int sum = 0;
//             for (int k = i; k <= j; k++) {
//                 sum += nums[k];
//             }

//             maxi = max(maxi, sum);
//         }
//     }

//     return maxi;
//     }
};