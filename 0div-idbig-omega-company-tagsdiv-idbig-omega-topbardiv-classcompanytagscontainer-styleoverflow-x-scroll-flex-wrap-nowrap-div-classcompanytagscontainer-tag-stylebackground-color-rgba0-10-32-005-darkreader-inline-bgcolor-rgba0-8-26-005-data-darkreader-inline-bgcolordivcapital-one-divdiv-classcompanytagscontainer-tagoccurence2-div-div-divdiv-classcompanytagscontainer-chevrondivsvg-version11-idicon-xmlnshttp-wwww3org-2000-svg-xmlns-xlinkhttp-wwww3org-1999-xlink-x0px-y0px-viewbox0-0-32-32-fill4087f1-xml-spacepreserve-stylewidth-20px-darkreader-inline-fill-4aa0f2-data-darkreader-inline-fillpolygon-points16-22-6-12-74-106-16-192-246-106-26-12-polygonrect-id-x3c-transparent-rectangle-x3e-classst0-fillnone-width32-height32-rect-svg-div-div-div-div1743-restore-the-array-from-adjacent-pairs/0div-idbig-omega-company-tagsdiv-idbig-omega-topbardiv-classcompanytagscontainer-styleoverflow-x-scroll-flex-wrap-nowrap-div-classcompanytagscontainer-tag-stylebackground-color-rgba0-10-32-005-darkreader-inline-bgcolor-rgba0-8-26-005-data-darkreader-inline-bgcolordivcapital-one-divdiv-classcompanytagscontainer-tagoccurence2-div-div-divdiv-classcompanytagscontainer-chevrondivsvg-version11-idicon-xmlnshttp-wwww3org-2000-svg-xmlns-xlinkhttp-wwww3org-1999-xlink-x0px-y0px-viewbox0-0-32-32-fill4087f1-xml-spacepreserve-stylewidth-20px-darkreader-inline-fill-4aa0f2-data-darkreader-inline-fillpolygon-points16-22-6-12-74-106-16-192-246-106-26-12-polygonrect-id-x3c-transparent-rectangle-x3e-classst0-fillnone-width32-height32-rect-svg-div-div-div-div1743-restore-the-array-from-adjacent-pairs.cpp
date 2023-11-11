class Solution {
public:
    void dfs(int node,unordered_map<int,vector<int>>&mp,vector<int>&res,unordered_map<int,int>&vis)
    {
        vis[node]=1;
        res.push_back(node);
        for(auto it:mp[node])
            if(vis[it]==0)    
                dfs(it,mp,res,vis);
    }
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        vector<int>res;
        unordered_map<int,vector<int>>mp;
        unordered_map<int,int>vis;
        for(auto it:adjacentPairs)
        {
            mp[it[0]].push_back(it[1]);
            mp[it[1]].push_back(it[0]);
            vis[it[0]]=0;
            vis[it[1]]=0;
        }
        int start=-1;
        for(auto it:mp)
            if(it.second.size()==1)
                start=it.first;
        dfs(start,mp,res,vis);
        return res;
    }
};