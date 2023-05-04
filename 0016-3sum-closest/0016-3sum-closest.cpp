class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int min = INT_MAX, ans, sum;
        sort(nums.begin(), nums.end());

    for(int i=0; i<nums.size(); i++)
    {
        if(i==0 || nums[i]!=nums[i-1])
        {
        int left = i+1;
        int right = nums.size()-1;
            
         while(left<right)
         {
             sum = nums[i] + nums[left] + nums[right];
             if(sum==target)
                 return sum;
             else if(sum<target)
                 left++;
             else
                 right--;
             if(abs(sum-target)<min)
             {
                 ans = sum;
                 min = abs(sum-target);
             }
        }
        }
    }
    return ans;
}  
};