class Solution {
public:
    int countTestedDevices(vector<int>& v) {
        int k = 0;
        for (int a : v)
            k += a>k;
        return k;
    }
};