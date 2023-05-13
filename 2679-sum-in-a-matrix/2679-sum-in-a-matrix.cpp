class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        map<int,priority_queue<int>> mp;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums[0].size();j++){
                mp[i].push(nums[i][j]);
            }
        }
        int score=0;
        for(int i=0;i<nums[0].size();i++){
            int maxi=0;
            for(int j=0;j<nums.size();j++){
                if(maxi<mp[j].top()){
                    maxi=mp[j].top();
                }
                mp[j].pop();
            }
            score+=maxi;
        }
        return score;
    }
};