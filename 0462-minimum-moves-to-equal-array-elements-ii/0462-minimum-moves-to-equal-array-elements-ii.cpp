class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int sum=0;
        sort(nums.begin(),nums.end());
        int e=nums.size()-1;
        int tar=nums[e/2];
        sum=0;
        for(int i=0;i<nums.size();i++){
             sum+=abs(tar-nums[i]);
        }
        return sum;
    }
};
// class Solution {
// public:
//     int minMoves2(vector<int>& nums) {
//         int n = nums.size(), steps = 0;
//         sort(nums.begin(), nums.end());
//         for(int i=0; i<n/2; i++){
//             steps += nums[n-1-i] - nums[i]; 
//         }
//         return steps;
//     }
// };

        
