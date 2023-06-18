class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
       set<int> s(nums1.begin(), nums1.end());
       vector<int> ans;
       for (int it : nums2)
        if (s.erase(it))
            ans.push_back(it);
    return ans;

    }
};