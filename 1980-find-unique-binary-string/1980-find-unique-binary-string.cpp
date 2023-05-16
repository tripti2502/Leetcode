class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        unordered_set<string> Set(nums.begin(), nums.end());
        int n = nums.size();
        int k = 1 << n;
        for(int i = 0; i < k; i++) {
            string s = "";
            for(int j = 0; j < n; j++) {
                s = char('0' + ((i >> j) & 1 )) + s;
            }
            if(Set.find(s) == Set.end()) return s;
        }
        return "";
    }
};