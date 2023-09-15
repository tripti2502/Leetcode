class Solution {
public:
    int missingNumber(vector<int>& nums) { 
        int n=nums.size();
        int sum = 0; 
        int total = n*(n+ 1)/2; 
        for (auto number : nums) { 
            sum += number; 
        }
        return total - sum; 
    }
};