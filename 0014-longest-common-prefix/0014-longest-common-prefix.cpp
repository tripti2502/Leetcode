class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        sort(strs.begin(), strs.end());
        //traversing all characters of first string and compare
        for(int i=0; i<strs[0].size();i++){
            if(strs[0][i]!=strs[strs.size()-1][i]){
                return ans;
            }
            ans.push_back(strs[0][i]);  //ans+=strs[0][i];
        }
        return ans;
        
        }
    };
