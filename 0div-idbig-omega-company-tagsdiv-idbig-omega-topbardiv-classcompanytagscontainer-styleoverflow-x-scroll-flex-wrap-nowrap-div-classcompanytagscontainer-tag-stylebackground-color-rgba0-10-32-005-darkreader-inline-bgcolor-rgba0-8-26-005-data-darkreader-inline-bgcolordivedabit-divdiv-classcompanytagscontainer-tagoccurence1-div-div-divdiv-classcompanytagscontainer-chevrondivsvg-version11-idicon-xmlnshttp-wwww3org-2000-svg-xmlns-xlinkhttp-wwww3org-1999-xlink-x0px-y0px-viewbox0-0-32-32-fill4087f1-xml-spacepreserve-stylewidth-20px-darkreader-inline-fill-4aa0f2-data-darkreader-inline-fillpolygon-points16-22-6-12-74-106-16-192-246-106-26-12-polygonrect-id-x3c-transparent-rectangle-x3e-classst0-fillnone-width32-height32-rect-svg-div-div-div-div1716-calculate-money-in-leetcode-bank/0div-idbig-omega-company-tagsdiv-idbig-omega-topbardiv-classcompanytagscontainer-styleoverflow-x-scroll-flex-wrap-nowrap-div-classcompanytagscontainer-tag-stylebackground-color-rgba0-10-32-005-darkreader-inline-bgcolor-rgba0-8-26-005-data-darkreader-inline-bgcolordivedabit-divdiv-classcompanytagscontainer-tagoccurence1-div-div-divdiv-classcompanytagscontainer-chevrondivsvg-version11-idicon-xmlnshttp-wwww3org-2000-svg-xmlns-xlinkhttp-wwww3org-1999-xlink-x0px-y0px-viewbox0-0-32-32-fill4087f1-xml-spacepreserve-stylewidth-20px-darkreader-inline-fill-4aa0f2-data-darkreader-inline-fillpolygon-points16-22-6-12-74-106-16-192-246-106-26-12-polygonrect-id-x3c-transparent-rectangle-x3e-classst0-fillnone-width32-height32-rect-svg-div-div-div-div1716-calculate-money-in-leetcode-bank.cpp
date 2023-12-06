class Solution {
public:
    int totalMoney(int n) {
         int res = 0;
        for (int i = 1, k = 1; i <= n; i++, k++) {
            res += k;
            k= i % 7 ? k : (i / 7);
        }
        return res;
    }
};