class Solution {
public:
    string frequencySort(string s) {
        string ans= "";
        unordered_map<char,int> freq;         
        priority_queue<pair<int,char>> pq; 
        for(char c: s)
            freq[c]++;
        for(auto it: freq)
            pq.push({it.second,it.first}); 
           
           while(!pq.empty()) {
            int n = pq.top().first;
            while(n--)
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};


// int cnt[128] = {0};
        // for (char c : s)
        //     cnt[c]++;
        // auto cmp = [&](char a, char b)
        // {
        //     return cnt[a] > cnt[b] || (cnt[a] == cnt[b] && a < b); 
        // };
        // sort(s.begin(), s.end(), cmp);
        // return s;