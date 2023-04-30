class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        
        int n = size(mat), m = size(mat[0]), res = m*n;
        
        unordered_map<int,int> map;
        
        for(int i = 0; i < m*n; i++)map[arr[i]] = i;
        
        for(int i = 0; i < n; i++) {
            int maxIdx = 0;
            
            for(int j = 0; j < m; j++) {
                maxIdx = max(maxIdx, map[mat[i][j]]);
            }
            
            res = min(res,maxIdx);
        }
        
        for(int i = 0; i < m; i++) {
            int maxIdx = 0;
            
            for(int j = 0; j < n; j++) {
                maxIdx = max(maxIdx, map[mat[j][i]]);
            }
            
            res = min(res,maxIdx);
        }
        
        return res;
        
    }
};