class Solution {
public:
    int mod=1e9+7;
    int dp[101][201];
    int f(int index, int fuel, int finish, vector<int>& locations){
        if(fuel<0) return 0;
        //if(index==finish)return 1;
        if (dp[index][fuel] != -1)
            return dp[index][fuel];

        long ans = 0;

        for (int i = 0; i < locations.size(); i++)
            if (i != index)
                ans = (ans + f(i, fuel - abs(locations[index] - locations[i]), finish, locations)) % mod;

        return dp[index][fuel] = (index == finish) + ans;
    }
    int countRoutes(vector<int> &locations, int start, int finish, int fuel)
    {
        memset(dp, -1, sizeof(dp));
        return f(start, fuel, finish, locations);
    }
};