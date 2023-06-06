class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int len=INT_MAX;
        int n=nums.size();
        int prefix[n];
        prefix[0]=nums[0];
        for(int i=1; i<n; i++){
            prefix[i]=nums[i]+prefix[i-1];
        }
        int previndex = 0;
        for (int i = 0; i < n; i++){
        if (prefix[i] >= target){
            while (prefix[previndex] <= prefix[i] - target){
                previndex++;
            }
            len = min(len, i - previndex + 1);
        }
    }
    return (len < INT_MAX) ? len : 0;

    }
};