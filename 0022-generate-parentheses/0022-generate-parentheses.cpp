class Solution {
public:
   vector<string> v;
    void solve(string s, int i, int j, int n){
        if(i==n && j==n){
            v.push_back(s); 
            return;
        }
        if(j > i || i > n || j > n)
            return;
        solve(s+"(", i+1, j, n); 
        solve(s+")", i, j+1, n);
    }
    
    vector<string> generateParenthesis(int n){
        solve("", 0, 0, n);
        return v;
    }
};