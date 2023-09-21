class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        unordered_map<int, int>mp;
        int n=nums.size();
         if(nums[0]==x || nums[n-1]==x) return 1;
        
        int ans=INT_MAX;
        int prefix[n];
        prefix[0]=nums[0];
            for(int i=1; i<n; i++)
            {
                prefix[i]=nums[i]+prefix[i-1];
                
        mp[prefix[i]]=i+1;
            if(prefix[i]==x)
               ans = min(ans, i + 1);
            }
        
        int suffix[n+1];
        suffix[n]=0;
            for(int i=n-1; i>=0; i--)
            {
                suffix[i]=nums[i]+suffix[i+1];
        
        
            if(suffix[i]==x)
               ans = min(ans, n-i);
                
                if(mp[x - suffix[i]] > 0 && mp[prefix[i]] > mp[x - suffix[i]]) 
				ans = min(ans, n - i + mp[x - suffix[i]]);
        
        }
        return ans == INT_MAX ? -1 : ans;
    }
};