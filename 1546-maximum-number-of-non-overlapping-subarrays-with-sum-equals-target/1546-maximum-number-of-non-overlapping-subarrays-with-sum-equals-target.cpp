// class Solution {
// public:
//     int maxNonOverlapping(vector<int>& nums, int target) {
//          int ans = 0;
//          set<int> st;
//         st.insert(0);
//          int preSum = 0;
//          for(int a : nums){
//              preSum += a;
//              if(st.find(preSum - target) != st.end()){
//                  ans++;
//                  st.clear();
//                  preSum = 0;
//              }
//                st.insert(preSum);
//          }
//         return ans;
//     }
// };
 class Solution {
public:
    int maxNonOverlapping(vector<int>& nums, int target) {
        unordered_map<int , int> mp;
        int sum = 0, ans = 0;
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];  // summing up the current element
            if(mp.find(sum - target )!= mp.end()){ // if target sum is Found
                ans+= 1; //increament the result
                mp.clear(); // clear the map (as the sum is useless , as it will create overlapping sum)
                sum = 0; //make current sum = 0;
            }
            else if(sum == target){ //if sum is equal to target
                sum = 0; 
                ans+= 1;
                mp.clear();
            }
            else{
                mp[sum]++; // else store the sum
            }
        }
        return ans;
    }
};