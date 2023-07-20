class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& ast) {
        sort(ast.begin(),ast.end());
        long long sum=mass;
        int i=0;
        while(i<ast.size() && ast[i]<=sum){
                 sum+=ast[i];
                 i++;
        }
       if(i<ast.size())  return false;
       return true;
    }
};