class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int>m;
        int n=fruits.size();
        int left=0, right=0, ans=0;
        while(right<n){
            m[fruits[right]]++;
            while(m.size()>2){
                if(m[fruits[left]]==1){
                    m.erase(fruits[left]);
                }
                else{
                    m[fruits[left]]--;
                }
                left++;
            }
            ans=max(ans, right-left+1);
            
            right++;
        }
        return ans; 
    }
};