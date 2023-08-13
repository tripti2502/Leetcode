class Solution {
private:
    int findMax(int number){
        int maxDigit = INT_MIN;
        while(number > 0){
            maxDigit = max(maxDigit, number % 10);
            number /= 10;
        }
        return maxDigit;
    }
public:
    int maxSum(vector<int>& nums) {
        unordered_map<int, vector<int>> mp;
        for(auto &num : nums){
            int digit = findMax(num);
            if(mp.find(digit) == mp.end()){
                mp[digit] = {num};
            }
            else{
                mp[digit].push_back(num);
            }
        }
        int answer = -1;
        for(auto itr = mp.begin(); itr != mp.end(); itr++){
            vector<int> curr = itr->second;
            sort(curr.begin(), curr.end());
            if(curr.size() == 1) continue;
            answer = max(answer, curr[curr.size() - 1] + curr[curr.size() - 2]);
        }
        return answer;
    }
};



// class Solution {
// public:
//     int maxSum(vector<int>& nums) {
//         int ans=-1;
//         for(int i=0;i<nums.size()-1;i++){
//             int x=nums[i];
//             int xmax=0;
//             while(x){
//                 xmax=max(xmax,x%10);
//                 x=x/10;
//             }
//             for(int j=i+1;j<nums.size();j++){
//                 int y=nums[j];
//                 int ymax=0;
//             while(y){
//                 ymax=max(ymax,y%10);
//                 y=y/10;
//             }
//                 if(xmax==ymax) ans=max(ans,nums[i]+nums[j]);
//             }
//         }
//         return ans;
//     }
// };



// class Solution {
// public:
//     int check(int sum)
//     {
//         int x = sum%10;
//         while(sum>0)
//         {
//             int y = sum %10;
//             if(y>x)
//             {
//                 x=y;
//             }
//             sum = sum/10;
//         }
//         return x;
//     }
//     int maxSum(vector<int>& nums) {
//         int sum =-1;
//         for(int i =0;i<nums.size()-1;i++)
//         {
//             for(int j =i+1;j<nums.size();j++)
//             {
//                 int a = nums[i];
//                 int b = nums[j];
//                 int val1 = check(a);
//                 int val2 = check(b);
//                 if(val1==val2)
//                 {
//                     int temp = nums[i]+nums[j];
//                     if(temp>sum)
//                     {
//                         sum=temp;
//                     }
//                 }
//             }
//         }
        
//             return sum ;
        
//     }
// };