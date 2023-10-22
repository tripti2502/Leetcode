class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int mini=INT_MAX;
        int n=nums.size();
        vector<int>right(n);
        vector<int>left(n);
        int left_min=INT_MAX;
        for(int i=0;i<n;i++){
            left_min=min(left_min,nums[i]);
            left[i]=left_min;
        }
        int right_min=INT_MAX;
        for(int i=nums.size()-1;i>=0;i--){
            right_min=min(right_min,nums[i]);
            right[i]=right_min;
        }
        int ans=INT_MAX;
        for(int j=1;j<n-1;j++){
            if(nums[j]>right[j] and nums[j]>left[j]){
                ans=min(ans,nums[j]+left[j]+right[j]);
            }
        }
        return (ans==INT_MAX?-1:ans);
        
    }
};