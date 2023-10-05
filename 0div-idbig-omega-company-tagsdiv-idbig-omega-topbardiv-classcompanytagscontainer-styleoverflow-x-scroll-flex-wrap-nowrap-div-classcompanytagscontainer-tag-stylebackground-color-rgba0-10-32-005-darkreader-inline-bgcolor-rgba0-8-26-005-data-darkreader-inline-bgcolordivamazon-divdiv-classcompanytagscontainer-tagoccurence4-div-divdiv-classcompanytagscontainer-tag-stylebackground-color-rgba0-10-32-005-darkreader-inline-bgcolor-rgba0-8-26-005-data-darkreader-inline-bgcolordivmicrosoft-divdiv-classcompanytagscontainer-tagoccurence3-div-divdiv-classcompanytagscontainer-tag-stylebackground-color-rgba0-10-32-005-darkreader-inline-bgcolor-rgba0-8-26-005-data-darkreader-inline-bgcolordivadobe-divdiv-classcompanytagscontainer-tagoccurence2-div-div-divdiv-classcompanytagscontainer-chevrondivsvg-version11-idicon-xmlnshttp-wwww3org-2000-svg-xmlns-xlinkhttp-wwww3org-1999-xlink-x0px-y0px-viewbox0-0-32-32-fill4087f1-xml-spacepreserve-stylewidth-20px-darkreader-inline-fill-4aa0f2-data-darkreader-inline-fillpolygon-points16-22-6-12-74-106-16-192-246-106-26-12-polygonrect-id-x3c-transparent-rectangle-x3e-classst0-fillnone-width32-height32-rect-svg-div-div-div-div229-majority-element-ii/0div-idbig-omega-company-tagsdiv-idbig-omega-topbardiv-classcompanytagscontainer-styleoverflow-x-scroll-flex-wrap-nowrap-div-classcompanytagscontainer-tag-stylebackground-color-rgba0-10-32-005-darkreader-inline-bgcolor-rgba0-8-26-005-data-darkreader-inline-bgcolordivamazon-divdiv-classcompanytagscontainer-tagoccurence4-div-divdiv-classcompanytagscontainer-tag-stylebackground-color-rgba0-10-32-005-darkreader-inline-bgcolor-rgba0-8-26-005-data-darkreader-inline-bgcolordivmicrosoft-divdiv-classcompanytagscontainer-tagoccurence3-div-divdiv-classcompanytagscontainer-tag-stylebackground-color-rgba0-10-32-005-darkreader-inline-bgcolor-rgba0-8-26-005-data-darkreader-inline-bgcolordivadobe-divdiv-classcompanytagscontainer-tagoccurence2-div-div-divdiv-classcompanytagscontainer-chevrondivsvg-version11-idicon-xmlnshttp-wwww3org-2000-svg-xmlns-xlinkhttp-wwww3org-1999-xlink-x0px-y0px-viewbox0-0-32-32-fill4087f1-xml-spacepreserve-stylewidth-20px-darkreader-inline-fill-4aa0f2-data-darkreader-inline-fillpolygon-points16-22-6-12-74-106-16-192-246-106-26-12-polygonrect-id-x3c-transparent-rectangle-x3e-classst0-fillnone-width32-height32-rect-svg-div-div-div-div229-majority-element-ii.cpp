class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int> umap;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            umap[nums[i]]++;
        }
        for(auto y:umap){
            if(y.second > nums.size()/3){
                ans.push_back(y.first);
            }
        }
        return ans;
    }
};
