class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& p) {
        int ans=0;
        sort(p.begin(),p.end());
        for(int i=0;i<p.size()-1;i++){
            ans=max(ans,p[i+1][0]-p[i][0]);
        }
        return ans;
    }
};