class Solution {
public:
    vector<vector<int>> adj;
    vector<bool> visit;
    bool isSimilar(string& x, string& y){
        int s=x.size();
        int d=0;
        for(int i=0; i<s; i++ ){
            if (x[i]!=y[i]) d++;
        }
        return (d==0 || d==2);
    }

    void dfs(int i){
        visit[i]=1;
        for(int v: adj[i]){
            if (!visit[v]){
                dfs(v);
            }
        }
    }

    int numSimilarGroups(vector<string>& strs) {
        int n=strs.size();
        vector<int> row(n, 0);
        adj.assign(n, row);
        for(int i=0; i<n; i++)
            for(int j=0; j<i; j++){
                if (isSimilar(strs[i], strs[j])){
                    adj[i][j]=j;
                    adj[j][i]=i;
                }
            }
        visit.assign(n, 0);
        int ans=0;
        for(int i=0; i<n; i++){
            if (!visit[i]){
                dfs(i);
                ans++;
            }
        }
        return ans;
    }
};