class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        int i=0;
        if(nums.size()%3!=0) return {};
        while(i+2<nums.size()){
              if(nums[i+2]-nums[i]>k )return {};
              else{
                  vector<int> v;
                  v.push_back(nums[i]);
                 v.push_back(nums[i+1]);
                 v.push_back(nums[i+2]);
       ans.push_back(v);
              }
              i=i+3;
        }
        return ans;
    }
};