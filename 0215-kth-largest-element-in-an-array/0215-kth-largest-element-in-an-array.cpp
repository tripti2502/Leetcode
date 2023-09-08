class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        //return nums[k-1];
        return nums[nums.size()-k];
    }
};

// pq.push(nums[i]);
//             if(pq.size() > k) 
//                 pq.pop();
//         }
//         return pq.top();
//     }