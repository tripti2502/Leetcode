class Solution {
public:
    string sortVowels(string s) {
        vector<int>index;
        vector<char>arr;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
                index.push_back(i);
                arr.push_back(s[i]);
            }
        }
        sort(arr.begin(), arr.end());
        int i=0;
        for(auto it:index) s[it]=arr[i++];
        return s;
    }
};


