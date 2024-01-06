class Solution {
    int func(vector<pair<pair<int,int>,int>>&jobs,int i,vector<int> &dp){
        if(i>=jobs.size()) return 0;
        if(dp[i]!=-1) return dp[i];
        int take=0,non_take=0;
        take=jobs[i].second;
        int val_ind=-1;
        int s=i+1,e=jobs.size()-1;
        while(s<=e){
            int mid=(s+e)/2;
            if(jobs[mid].first.first >= jobs[i].first.second){
                val_ind=mid;
                e=mid-1;
            }
            else s=mid+1;
        }
        if(val_ind!=-1){
            take+=func(jobs,val_ind,dp);
        }
        non_take=func(jobs,i+1,dp);
        return dp[i]=max(take,non_take);
    }
public:
    int jobScheduling(vector<int>& sT, vector<int>& eT, vector<int>& p) {
        vector<pair<pair<int,int>,int>> jobs;
        for(int i=0;i<sT.size();i++){
            jobs.push_back({{sT[i],eT[i]},p[i]});
        }
        sort(jobs.begin(),jobs.end());
        vector<int> dp(sT.size(),-1);
        return func(jobs,0,dp);
    }
};