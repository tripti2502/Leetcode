class Solution {
public:
    int countGoodStrings(int low, int high, int zero, int one) {
        vector<int> dp(high + 1);
        dp[0] = 1;
        int res = 0, mod = 1e9 + 7;
        for (int i = 1; i <= high; ++i) {
            // if we can add 0 string then add 
            if (i >= zero) dp[i] = (dp[i] + dp[i - zero]) % mod;
            // if we can add 1's string i.e i >= len of 1's string
            if (i >= one) dp[i] = (dp[i] + dp[i - one]) % mod;
            // if i is in between low and high add 
            if (i >= low) res = (res + dp[i]) % mod;
        }
        return res;
    }
};


//wrong ans by chutiya me

// class Solution {
//     int f(int n, int zero, int one){
//         if(n==0) return one;
//         if(n<0) return one;
//         return f(n-zero, zero, one)+f(n-one, zero, one);
//     }
// public:
//     int countGoodStrings(int low, int high, int zero, int one) {
//         int ans=0;
//         int mod=1e9+7;
//         // string str1 ="", str2="";
//         for(int i=low; i<=high; i++){
//             // str1+=zero['0'];
//             // str2+=one['1'];
//             ans+=(ans%mod+f(i, zero, one)%mod);
            
//         }
//         return ans;
//     }
// };