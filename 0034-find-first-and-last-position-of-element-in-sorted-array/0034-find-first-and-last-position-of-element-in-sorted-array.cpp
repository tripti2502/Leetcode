class Solution {
public:
    int lower_bound(vector<int>& nums, int target) {
    int s = 0, e= nums.size()-1;
    while (s <= e) {
        int mid = (e-s)/2+s;
        if (nums[mid] < target)
            s = mid+1;
        else
            e = mid-1;
    }
    return s;
}
    vector<int> searchRange(vector<int>& nums, int target) {
    int idx1 = lower_bound(nums, target);
    int idx2 = lower_bound(nums, target+1)-1;
    if (idx1 < nums.size() && nums[idx1] == target)
        return {idx1, idx2};
    else
        return {-1, -1};
}

};
