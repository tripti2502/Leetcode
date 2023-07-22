class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return false;
        sort(nums.begin(), nums.end());
        for(int i=0; i<n-1; i++){
            if(nums[i]!=i+1) return false;
        
        }
        return nums[n-1]==nums[n-2];
        
    }
};
// bool isGood(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         int n = nums.back();
//         map<int,int> mp;
//         for(auto it:nums) mp[it]++;
//         for(int i=1;i<=n-1;i++) if((mp[i]!=1)) return false;
//         if(mp[n]!=2) return false;
//         return true;