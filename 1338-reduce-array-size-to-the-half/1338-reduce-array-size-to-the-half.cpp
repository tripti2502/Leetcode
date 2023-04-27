class Solution {
public:
    int minSetSize(vector<int>& arr) 
    {
        int n=arr.size();
        priority_queue<pair<int,int>>maxS;
        map<int,int>mp;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        for(auto x:mp)
        {
            maxS.push({x.second,x.first});
        }
        int x=n;
        vector<int>v;
        while(x>(n/2))
        {
            v.push_back(maxS.top().second);
            x=x-(maxS.top().first);
            maxS.pop();
        }
        return v.size();
    }
};