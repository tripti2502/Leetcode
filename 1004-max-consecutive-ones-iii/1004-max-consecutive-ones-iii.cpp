class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxi = 0;
        int i = 0;
        int zero = 0;
        for(int j=0;j<nums.size();j++){
            if(nums[j]==0) zero++;
            if(zero<=k) maxi = max(maxi,(j-i+1));
            else while(i<nums.size() && zero>k) if(nums[i++]==0) zero--;
        }
        return maxi;
    }
};