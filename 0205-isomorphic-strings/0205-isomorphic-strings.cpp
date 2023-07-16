class Solution {
public:
    bool isIsomorphic(string s, string t) {
//         int m1[256] = {0}, m2[256] = {0}, n = s.size();
//         for (int i = 0; i < n; i++) {
//             if (m1[s[i]] != m2[t[i]]) return false;
//             m1[s[i]] = i+1 ;
//             m2[t[i]] = i+1;
//         }
//         return true;
//     }
// };

int m=s.size();
int n=t.size();
if(m!=n) return false;
int m1[256]={};
int m2[256]={};
for(int i=0; i<n; i++){
    if(!m1[s[i]] && !m2[t[i]]){
        m1[s[i]]=t[i];
        m2[t[i]]=s[i];
    }
    else if (m1[s[i]]!= t[i]) return false;
    
}
return true;
}
};