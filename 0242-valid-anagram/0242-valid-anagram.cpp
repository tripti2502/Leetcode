class Solution {
public:
   bool isAnagram(string s, string t) {
//     sort(s.begin(), s.end());
//     sort(t.begin(), t.end());
//     if(t==s){
//         return true;
//     }
//     return false;
// }
    
// };
 //tc o(nlogn)
        if (s==t) return true;
        if (s.size()!=t.size()) return false;
        int freq[26]={};
        for (int i=0; i<s.size(); i++) {
            freq[s[i]-'a']++;
            freq[t[i]-'a']--;
        }
        for (int i=0; i<26; i++) {
            if (freq[i]) return false;
        }
        return true;
   }
};