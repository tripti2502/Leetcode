class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        
        if(s1==s2) return true;
        int i=0; int j=2; 

        while(i<4){
            if(s1[i]==s2[i]){
                i++; j++; continue;
            }
            else{
                if(s1[i]!=s2[j]){
                    return false; 
                }
                else{
                    swap(s2[i],s2[j]);
                    i++; j++; 
                }
            }
        }
        
        return true;   
    }
};

// class Solution {
// public:
//     bool canBeEqual(string s1, string s2) {
//         string ab = "";
//         string cd = "";
//         for(int i=0;i<s1.size();i+=2) ab+=s1[i];
//         for(int i=1;i<s2.size();i+=2) cd+=s1[i];
//         sort(ab.begin(),ab.end());
//         sort(cd.begin(),cd.end());
        
//         string pq = "";
//         string rs = "";
//         for(int i=0;i<s1.size();i+=2) pq+=s2[i];
//         for(int i=1;i<s2.size();i+=2) rs+=s2[i];
//         sort(pq.begin(),pq.end());
//         sort(rs.begin(),rs.end());
        
//         return pq==ab && cd==rs;
        
//     }
// };