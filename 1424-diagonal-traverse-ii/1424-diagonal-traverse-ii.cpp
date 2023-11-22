class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
       map<int,vector<int>>mp;
        int sum=0;
       
            for(int i=0; i<nums.size(); i++){
           for(int j=0; j<nums[i].size(); j++){
               mp[i+j].push_back(nums[i][j]);
           }
        }
        
         vector<int> ans;
                                                               
    for(auto it: mp)                                          
    {                                                         
        reverse(it.second.begin(),it.second.end());           
                                                              
        for(auto k: it.second)                               
        {
            ans.push_back(k);
        }
    }
    return ans;
    }
};

