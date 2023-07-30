class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> freq;
        
        for(int i = 0; i < n; i++) {  //to count distinct ele
            freq.insert(nums[i]);
        }
        
        int distinct = freq.size();
        int ans = 0;
    
        for (int i = 0; i < n; i++) {
            unordered_set<int> temp;

            for(int j = i; j < n; j++) {
                temp.insert(nums[j]);
                if (temp.size() == distinct) {
                    ans++;
                }
            }
        }
    
    return ans;   
    }
};
//     int countCompleteSubarrays(vector<int>& A) {
//         int n = A.size(), k = unordered_set<int>(A.begin(), A.end()).size(), res = 0, i = 0;
//         unordered_map<int, int> count;
//         for (int j = 0; j < n; ++j) {
//             k -= count[A[j]]++ == 0;
//             while (k == 0)
//                 k += --count[A[i++]] == 0;
//             res += i;
//         }
//         return res;
//     }
// };