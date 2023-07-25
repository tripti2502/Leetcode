class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
      int n = nums.size();
  // Define array for storing the ans separately.
  vector<int> ans(n,0);
  // positive elements start from 0 and negative from 1.
  int posIndex = 0, negIndex = 1;
  for(int i = 0;i<n;i++){
      
      // Fill negative elements in odd indices and inc by 2.
      if(nums[i]<0){
          ans[negIndex] = nums[i];
          negIndex+=2;
      }
      
      // Fill positive elements in even indices and inc by 2.
      else{
          ans[posIndex] = nums[i];
          posIndex+=2;
      }
  }
  
  return ans;
         
    }
};