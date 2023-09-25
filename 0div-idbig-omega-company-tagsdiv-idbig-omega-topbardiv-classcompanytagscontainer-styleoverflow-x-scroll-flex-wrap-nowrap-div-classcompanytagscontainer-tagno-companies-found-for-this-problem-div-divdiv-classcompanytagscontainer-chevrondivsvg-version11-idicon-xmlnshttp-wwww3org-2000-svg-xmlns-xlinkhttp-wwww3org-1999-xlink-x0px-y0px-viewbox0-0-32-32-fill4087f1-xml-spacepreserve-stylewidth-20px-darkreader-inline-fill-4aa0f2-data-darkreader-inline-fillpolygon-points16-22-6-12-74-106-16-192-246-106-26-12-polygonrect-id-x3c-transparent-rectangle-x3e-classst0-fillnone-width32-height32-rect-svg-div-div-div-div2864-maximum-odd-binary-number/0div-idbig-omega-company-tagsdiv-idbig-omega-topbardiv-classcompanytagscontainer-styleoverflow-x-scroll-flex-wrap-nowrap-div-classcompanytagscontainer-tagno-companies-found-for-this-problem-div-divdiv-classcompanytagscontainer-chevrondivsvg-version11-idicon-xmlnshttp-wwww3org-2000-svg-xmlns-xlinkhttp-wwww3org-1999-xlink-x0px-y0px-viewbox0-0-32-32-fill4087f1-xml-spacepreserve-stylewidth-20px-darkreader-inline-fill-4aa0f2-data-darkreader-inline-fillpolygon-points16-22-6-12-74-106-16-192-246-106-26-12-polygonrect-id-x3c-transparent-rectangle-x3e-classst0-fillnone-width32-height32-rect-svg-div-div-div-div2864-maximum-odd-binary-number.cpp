class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int i = 0, sz = s.size();
    for(int j = 0;j < sz - 1; ++j) {
        if(s[j] == '1') {
            swap(s[j], s[i]);
            ++i;
        } 
    }
    
    if(s.back() != '1') 
        swap(s[sz - 1], s[i - 1]);
    return s;
    }
};


// string ans = "";
//         int one = 0;
//         for(int i=0;i<s.length();i++) one += (s[i] - '0'); 
//         int zero = s.length()-one;
//         for(int i=0;i<one-1;i++) ans.push_back('1');
//         for(int i=0;i<zero;i++) ans.push_back('0');
//         ans.push_back('1');
//         return ans;