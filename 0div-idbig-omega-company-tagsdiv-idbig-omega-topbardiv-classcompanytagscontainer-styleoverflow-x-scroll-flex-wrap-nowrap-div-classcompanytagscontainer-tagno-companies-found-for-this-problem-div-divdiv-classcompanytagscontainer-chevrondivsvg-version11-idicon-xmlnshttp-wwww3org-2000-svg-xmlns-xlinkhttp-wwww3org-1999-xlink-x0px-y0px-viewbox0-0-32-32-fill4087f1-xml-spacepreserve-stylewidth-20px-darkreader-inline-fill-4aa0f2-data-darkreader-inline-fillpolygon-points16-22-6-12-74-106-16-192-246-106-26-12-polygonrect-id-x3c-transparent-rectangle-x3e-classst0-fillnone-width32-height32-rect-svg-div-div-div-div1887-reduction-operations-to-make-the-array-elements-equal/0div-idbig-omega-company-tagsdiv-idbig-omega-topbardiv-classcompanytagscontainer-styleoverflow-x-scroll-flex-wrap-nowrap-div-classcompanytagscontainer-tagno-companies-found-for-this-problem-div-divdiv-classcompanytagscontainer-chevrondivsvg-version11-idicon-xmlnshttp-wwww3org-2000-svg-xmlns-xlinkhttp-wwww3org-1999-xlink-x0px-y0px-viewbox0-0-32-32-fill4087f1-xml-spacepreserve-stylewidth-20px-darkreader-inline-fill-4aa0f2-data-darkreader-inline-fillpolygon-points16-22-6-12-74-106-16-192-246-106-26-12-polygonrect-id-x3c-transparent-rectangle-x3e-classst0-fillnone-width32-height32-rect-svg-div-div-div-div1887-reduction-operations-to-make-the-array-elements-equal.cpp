class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int res=0;
        int size=nums.size();
        for (int j = size - 1; j > 0; --j)
        if (nums[j - 1] != nums[j])
            res += size - j;
    return res;
    }
};