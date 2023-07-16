class Solution {
public:
    vector<vector<int>> findPrimePairs(int n) {
        vector<bool> isPrime(n+1,true);
        for(int i=2;i*i<=n;i++){
          if(isPrime[i]){
              for(int j=i*i;j<=n;j+=i){
                  isPrime[j]=false;
              }
          }
        }
        vector<vector<int>> ans;
        for(int i=2;i<=n/2;i++){
            vector<int> temp;
            if(isPrime[i] && isPrime[n-i])
            {
                temp.push_back(i);
                temp.push_back(n-i);
                ans.push_back(temp);
            } 
        }
        return ans;
    }
};