class Solution {
public:
    vector<int> circularGameLosers(int n, int k) {
        vector<int> vis(n,0);
        int i=1,j=0;
        vis[0]=1;
        while(true){
            j=(j+(i*k))%n;
            if(vis[j]) break;
            vis[j]=1;
            i++;
        }
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(!vis[i]) ans.push_back(i+1);
        }
        return ans;
    }
};