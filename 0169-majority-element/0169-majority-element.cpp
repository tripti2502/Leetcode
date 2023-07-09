class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        map<int,int>mp;
        for(int i=0; i<n; i++){
            mp[nums[i]]++;
        }
        for(auto itr:mp){
            if(itr.second>(n/2)){
                count=itr.first;
            }
        }
        return count;
        
    }
};