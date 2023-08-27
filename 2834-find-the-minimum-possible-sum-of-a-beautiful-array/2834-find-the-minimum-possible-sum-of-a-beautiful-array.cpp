class Solution {
public:
    long long minimumPossibleSum(int n, int target) {
        long long sum =0;
        int num =0;
         unordered_set<int> set;
        int i=1;
         while(num<n)
         {
            if (set.find(target-i) == set.end())
            {
                sum+=i;
                set.insert(i);
                num++;
            }
             i++;
         }
        return sum;
    }
};