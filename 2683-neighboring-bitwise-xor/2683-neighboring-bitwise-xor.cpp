// class Solution {
// public:
//     bool doesValidArrayExist(vector<int>& d) {
//         int n=d.size();
//         vector<int> v(n);
//         for(int i=1;i<d.size();i++){
//             if(d[i-1]==0) v[i]=v[i-1];
//             else v[i]=!v[i-1];
//         }
//        for(int i=0;i<n;i++){
//            if(i==n-1) {
//                if((v[i]^v[0])!= d[i]) return false;
//            }
//            else {
//                if((v[i]^v[i+1])!=d[i]) return false;
//            }
//        }
//         return true;
//     }
// };
class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int ans = 0;
        for(auto it:derived) ans+=it;
        return ans%2==0;
    }
};