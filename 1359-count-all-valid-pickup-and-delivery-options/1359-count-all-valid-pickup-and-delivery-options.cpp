class Solution {
public:
   int countOrders(int n) {
   long res = 1, mod = 1e9 + 7;
        for (int i = 1; i <= n; ++i)
            res = res * (i * 2 - 1) * i % mod;
        return res;
    }
};

// Assume we have already n - 1 pairs, now we need to insert the nth pair.
// To insert the first element, there are n * 2 - 1 chioces of position。
// To insert the second element, there are n * 2 chioces of position。
// So there are (n * 2 - 1) * n * 2 permutations.
// Considering that delivery(i) is always after of pickup(i), we need to divide 2.
// So it's (n * 2 - 1) * n.

// long long res = 1, cap = 1000000007;
//     for (int i=1; i<n+1; ++i) res = res * i % cap;
//     for (int i=1; i<2*n; i+=2) res = res * i % cap;
//     return res;


// int mod=1e9+7;
//     int countOrders(int n) {
//         long long p=1;
//         for(int i=2;i<=n;i++){
//             long long c=((p%mod*(2*i-1)%mod)%mod*i%mod)%mod;           
//             p=c;
//         }
//         return p;