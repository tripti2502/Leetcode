class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int p=0,m=0;
        for(auto it: gain){
            p += it;
            m = max(m, p);
        }
        return m;
    }
};
