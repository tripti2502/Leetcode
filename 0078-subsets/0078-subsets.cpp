class Solution {
public:
    vector<vector<int>> ans;
    void solve(int i, vector<int>&arr, vector<int>&temp)
    {
        if(i == arr.size()) 
        {
            ans.push_back(temp);
            return;
        }
        temp.push_back(arr[i]);
        solve(i + 1, arr, temp);
        
        temp.pop_back();
        
        solve(i + 1, arr, temp);
        
    }
    vector<vector<int>> subsets(vector<int>& arr) {
        ans.clear();
        
        vector<int> temp; 
        solve(0, arr, temp); 
        
        return ans;
    }
};