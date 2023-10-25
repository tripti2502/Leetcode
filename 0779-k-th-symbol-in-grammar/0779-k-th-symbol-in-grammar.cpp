class Solution {
public:
    int kthGrammar(int n, int k) {
        int ans = 0;
        while (k > 1) {
            k = k % 2 == 1 ? k + 1 : k / 2;
            ans ^= 1;
        }
        return ans;
    }
};


// if (N == 1) return 0;
// 	if (K % 2 == 0) return (kthGrammar(N - 1, K / 2) == 0) ? 1 : 0;
// 	else return (kthGrammar(N - 1, (K + 1) / 2) == 0) ? 0 : 1;