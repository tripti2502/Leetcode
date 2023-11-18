class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int ans = 1, i = 0;
        long sum = 0;
        sort(nums.begin(), nums.end());
        for (int j = 0; j <nums.size(); j++) {
            sum += nums[j];
            while (sum + k < (long) nums[j] * (j - i + 1)) {
                sum -= nums[i];
                i += 1;
            }
            ans = max(ans, j - i + 1);
        }
        return ans;
    }
};