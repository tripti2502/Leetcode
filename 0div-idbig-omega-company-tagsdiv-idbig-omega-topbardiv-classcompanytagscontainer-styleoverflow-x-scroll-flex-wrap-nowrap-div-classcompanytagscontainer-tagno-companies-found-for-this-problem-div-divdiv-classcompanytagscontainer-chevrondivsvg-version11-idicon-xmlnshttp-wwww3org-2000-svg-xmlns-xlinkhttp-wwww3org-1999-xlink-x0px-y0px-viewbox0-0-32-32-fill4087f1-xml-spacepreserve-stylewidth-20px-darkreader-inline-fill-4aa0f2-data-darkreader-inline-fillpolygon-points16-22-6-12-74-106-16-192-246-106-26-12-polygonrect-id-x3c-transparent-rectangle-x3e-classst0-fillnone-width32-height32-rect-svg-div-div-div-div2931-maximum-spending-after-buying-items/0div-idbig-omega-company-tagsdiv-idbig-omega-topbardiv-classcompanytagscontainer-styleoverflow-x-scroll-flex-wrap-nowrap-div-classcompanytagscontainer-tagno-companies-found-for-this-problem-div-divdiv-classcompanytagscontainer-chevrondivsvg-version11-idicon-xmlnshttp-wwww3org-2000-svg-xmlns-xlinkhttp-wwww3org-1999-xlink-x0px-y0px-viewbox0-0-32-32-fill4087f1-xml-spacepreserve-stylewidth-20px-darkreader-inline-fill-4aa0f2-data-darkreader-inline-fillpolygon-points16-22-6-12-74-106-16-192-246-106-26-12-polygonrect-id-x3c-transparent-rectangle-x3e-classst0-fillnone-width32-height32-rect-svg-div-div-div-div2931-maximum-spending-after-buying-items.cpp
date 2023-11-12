class Solution {
public:
    long long maxSpending(vector<vector<int>>& values) {
        vector<long long> v;
        for(int i = 0; i < values.size(); i++)
        {
            for(long long j = 0; j < values[i].size(); j++)
                v.push_back(values[i][j]);
        }
        sort(v.begin(), v.end());
        long long ans = 0;
        for(long long i = 0; i < v.size(); i++)
            ans += v[i] * (i + 1);
        return ans;
    }
};







