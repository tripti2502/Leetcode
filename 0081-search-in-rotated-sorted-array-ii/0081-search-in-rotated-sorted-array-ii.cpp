class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int l=0;
        int r=nums.size()-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]==target)
                return true;
            
            if((nums[l]==nums[mid]) && (nums[mid]==nums[r])){
                l++;
                r--;
            }
            else if(nums[mid]>=nums[l]){
                if(target>=nums[l] && target<nums[mid])
                    r=mid-1;
                else
                    l=mid+1;
            }
            else{
                if(target>nums[mid] && target<=nums[r])
                    l=mid+1;
                else
                    r=mid-1;
            }
        }
        
        return false;
    }
};