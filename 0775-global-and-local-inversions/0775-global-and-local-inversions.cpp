class Solution {
public:
    bool isIdealPermutation(vector<int>& nums) {
        int loc=0,glo=0;
       for(int i=0;i<nums.size();i++){
           if(nums[i]>i){
               glo+=nums[i]-i;
           }
           if(i!=0 && nums[i]< nums [i-1]) loc++;
           if(nums[i]==i && i<nums.size()-1 && nums[i]>nums [i+1]) glo++;
       }
        return glo==loc;
    }
};