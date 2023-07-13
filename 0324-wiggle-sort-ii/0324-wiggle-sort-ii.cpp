class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<int> res(n);
        int i=1,j=n-1;
        while(j>=0){
            if(i>=n) i=0;
            res[i]=nums[j];
            j--;
            i+=2;
        }
        for(int i=0;i<n;++i) nums[i]=res[i];
        return;
    }
};
