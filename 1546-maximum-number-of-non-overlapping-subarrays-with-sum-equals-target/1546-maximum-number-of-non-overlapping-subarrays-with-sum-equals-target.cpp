class Solution {
public:
    int maxNonOverlapping(vector<int>& nums, int target) {
         int ans = 0;
         set<int> st;
         st.insert(0);
         int preSum = 0;
         for(int a : nums){
             preSum += a;
             if(st.find(preSum - target) != st.end()){
                 ans++;
                 st.clear();
                 preSum = 0;
             }
               st.insert(preSum);
         }
        return ans;
    }
};