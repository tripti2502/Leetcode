class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int s = 1, e = nums.size() - 1, cnt;
        while(s <=  e)
        {
            int mid = s + (e - s) / 2;
            cnt = 0;
            for(int n : nums)
            {
                if(n <= mid)
                    cnt++;
            }
            if(cnt <= mid)
                s = mid + 1;
            else
                e = mid - 1;
        }
        return s;
    }
};