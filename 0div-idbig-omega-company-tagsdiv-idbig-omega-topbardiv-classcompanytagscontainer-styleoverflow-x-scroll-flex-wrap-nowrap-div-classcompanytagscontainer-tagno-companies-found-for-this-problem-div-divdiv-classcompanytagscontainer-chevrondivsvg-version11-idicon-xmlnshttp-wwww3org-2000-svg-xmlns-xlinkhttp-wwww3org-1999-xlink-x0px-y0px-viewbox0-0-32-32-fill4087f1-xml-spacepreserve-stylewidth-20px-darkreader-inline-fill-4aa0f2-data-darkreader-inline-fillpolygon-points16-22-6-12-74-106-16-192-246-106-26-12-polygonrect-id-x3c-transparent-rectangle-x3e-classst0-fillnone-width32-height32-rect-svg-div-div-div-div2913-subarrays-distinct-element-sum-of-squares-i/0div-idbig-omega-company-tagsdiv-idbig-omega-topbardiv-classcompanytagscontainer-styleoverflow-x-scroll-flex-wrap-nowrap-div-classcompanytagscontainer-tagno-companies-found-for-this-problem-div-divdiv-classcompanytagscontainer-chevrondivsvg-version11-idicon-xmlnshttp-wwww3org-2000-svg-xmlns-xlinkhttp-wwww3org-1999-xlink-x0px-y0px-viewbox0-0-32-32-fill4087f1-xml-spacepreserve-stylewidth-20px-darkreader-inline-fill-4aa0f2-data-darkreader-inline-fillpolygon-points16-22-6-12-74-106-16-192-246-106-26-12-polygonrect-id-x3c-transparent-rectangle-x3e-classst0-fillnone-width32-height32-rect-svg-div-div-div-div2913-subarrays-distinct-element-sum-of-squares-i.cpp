class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int sum=0;
        for(int i=0; i<nums.size(); i++){
            unordered_map<int,int>ump;
           int count=0;
            for(int j=i; j<nums.size(); j++){
                ump[nums[j]]++;
                
                if(ump[nums[j]]==1) count++;
                sum=sum+count*count;
        }
    }
    return sum;
    }
};


