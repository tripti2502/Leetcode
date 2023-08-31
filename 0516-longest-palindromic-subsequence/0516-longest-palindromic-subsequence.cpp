class Solution {
public:
//     int longestPalindromeSubseq(string s) {
//         int n = s.size();
//         vector<vector<int>> dp(n, vector<int>(n));
//         for (int i = n - 1; i >= 0; --i) {
//             dp[0][0] = 1;
//             for (int j = i+1; j < n; ++j) {
//                 if (s[i] == s[j]) {
//                     dp[i][j] = dp[i+1][j-1] + 2;
//                 } else {
//                     dp[i][j] = max(dp[i+1][j], dp[i][j-1]);
//                 }
//             }
//         }
//         return dp[0][n-1];
//     }
// };
int lcs(string s1, string s2) {
    
    int n=s1.size();
    int m=s2.size();

    vector<int> prev(m+1,0), cur(m+1,0);
    
    // Base Case is covered as we have initialized the prev and cur to 0.
    
    for(int ind1=1;ind1<=n;ind1++){
        for(int ind2=1;ind2<=m;ind2++){
            if(s1[ind1-1]==s2[ind2-1])
                cur[ind2] = 1 + prev[ind2-1];
            else
                cur[ind2] = 0 + max(prev[ind2],cur[ind2-1]);
        }
        prev= cur;
    }
    
    return prev[m];
}

int longestPalindromeSubseq(string s){
    string t = s;
    reverse(s.begin(),s.end());
    return lcs(s,t);
}
};