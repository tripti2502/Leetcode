class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxi = 0;
        int i = 0;
        int countZero = 0;
        for(int j=0;j<nums.size(); j++){
            if(nums[j]==0) countZero++;
            if(countZero<=k) maxi = max(maxi,(j-i+1));
            else 
                while(i<nums.size() && countZero>k) if(nums[i++]==0) countZero--;
        }
        return maxi;
    }
};