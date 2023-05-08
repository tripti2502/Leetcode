class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum1=0;
        int sum2=0;
        int n=mat.size();
        for(int i=0;i<n;i++){
            sum1=sum1+mat[i][i];
            sum2=sum2+mat[i][n-1-i];
        }
        if(n%2==0)
            return sum1+sum2;
        return sum1+sum2 -mat[n/2][n/2];
    }
};