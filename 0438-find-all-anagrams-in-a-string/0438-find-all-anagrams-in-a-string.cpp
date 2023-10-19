class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        vector<int> hash(26, 0);
        vector<int> phash(26, 0);
        int m = p.size();
        int n = s.size();
        if(n < m)
        {
            return ans;
        }
        int left = 0,right = 0;
        while(right < m)
        {
            phash[p[right] - 'a']++;
            hash[s[right] - 'a']++;
            right++;
        }
        right--;
        while(right < n)
        {
            if(phash == hash)
            {
                ans.push_back(left);
            }
            right++;
            if(right != n)
            {
                hash[s[right] - 'a']++;
            }
            hash[s[left] - 'a']--;
            left++;
        }
        return ans;
    }
};

