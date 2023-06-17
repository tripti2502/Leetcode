class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int j=0;
        vector<int> temp(n);
        for(int i=0; i<n; i++){
            if(nums[i]!=0){
                temp[j]=nums[i];
                j++;
            }}
        for(int i=0;i<n;i++){
            nums[i]=temp[i];
        }
        
    }
};