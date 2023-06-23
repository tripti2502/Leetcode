class Solution {
public:
    int minimumTotal(vector<vector<int>>& arr) {
    int n = arr.size();
    vector<int> front = arr[n-1];
    for(int i = n-2 ; i>=0 ; i--)
    {
        for(int j = 0 ; j<=i ; j++)
        {
            front[j] = arr[i][j] +  min(front[j],front[j+1]);
        }
    }
    return front[0];
}
};