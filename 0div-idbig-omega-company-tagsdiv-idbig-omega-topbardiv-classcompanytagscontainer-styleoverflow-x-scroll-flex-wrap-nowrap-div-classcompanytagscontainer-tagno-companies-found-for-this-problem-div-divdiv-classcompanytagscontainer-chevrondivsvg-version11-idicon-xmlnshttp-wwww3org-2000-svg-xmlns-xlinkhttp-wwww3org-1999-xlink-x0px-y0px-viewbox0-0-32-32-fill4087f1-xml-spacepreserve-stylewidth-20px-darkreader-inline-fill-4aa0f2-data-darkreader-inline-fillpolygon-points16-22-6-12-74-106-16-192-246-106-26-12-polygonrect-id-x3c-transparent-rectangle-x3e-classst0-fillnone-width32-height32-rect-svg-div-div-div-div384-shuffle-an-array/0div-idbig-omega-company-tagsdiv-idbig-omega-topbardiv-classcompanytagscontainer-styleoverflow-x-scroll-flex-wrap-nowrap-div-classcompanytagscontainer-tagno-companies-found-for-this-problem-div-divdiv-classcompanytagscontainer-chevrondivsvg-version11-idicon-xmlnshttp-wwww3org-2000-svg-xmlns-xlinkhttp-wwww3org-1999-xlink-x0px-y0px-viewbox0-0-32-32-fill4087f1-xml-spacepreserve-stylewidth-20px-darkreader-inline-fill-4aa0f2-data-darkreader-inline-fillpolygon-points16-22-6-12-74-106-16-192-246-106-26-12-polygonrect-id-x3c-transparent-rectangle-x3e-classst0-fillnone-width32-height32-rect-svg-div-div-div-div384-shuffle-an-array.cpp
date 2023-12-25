class Solution {
public:
    vector<int>n1,n2;
    
    Solution(vector<int>& nums) {
        n1=n2=nums;
        
    }
    
    vector<int> reset() {
        return n2;
        
    }
    
    vector<int> shuffle() {
        
        next_permutation(n1.begin(),n1.end());
        return n1;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */