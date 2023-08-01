class Solution {
public:
    vector<vector<int>>res;
    void find(int n,int k,int index,vector<int>&v)
    {
        if(k==0)
        {
            res.push_back(v);
            return;
        }
        for(int i=index;i<=n;i++)
        {
            v.push_back(i);   //pick the number
            find(n,k-1,i+1,v);
            v.pop_back(); //not pick the number
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>v;
        find(n,k,1,v);
        return res;
        
    }

};