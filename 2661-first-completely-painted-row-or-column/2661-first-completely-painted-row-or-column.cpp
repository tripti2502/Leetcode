class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        map<int,pair<int,int>> mp;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                mp[mat[i][j]].first=i;
                mp[mat[i][j]].second=j;
            }
        }
        int n=mat.size(),m=mat[0].size();
        vector<int> row(n,0),col(m,0);
        for(int i=0;i<arr.size();i++){
            row[mp[arr[i]].first]++;
            col[mp[arr[i]].second]++;
            if(row[mp[arr[i]].first]==m) return i;
            if(col[mp[arr[i]].second]==n) return i;
        }
        return 0;
    }
};