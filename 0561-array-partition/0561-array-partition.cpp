class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int sum=0;
        sort(nums.begin(), nums.end());
        int n=nums.size()-1;
        for(int i=n; i>=1; i=i-2){
             sum+= min(nums[i],nums[i-1]);
        }
        return sum; 
    }
};