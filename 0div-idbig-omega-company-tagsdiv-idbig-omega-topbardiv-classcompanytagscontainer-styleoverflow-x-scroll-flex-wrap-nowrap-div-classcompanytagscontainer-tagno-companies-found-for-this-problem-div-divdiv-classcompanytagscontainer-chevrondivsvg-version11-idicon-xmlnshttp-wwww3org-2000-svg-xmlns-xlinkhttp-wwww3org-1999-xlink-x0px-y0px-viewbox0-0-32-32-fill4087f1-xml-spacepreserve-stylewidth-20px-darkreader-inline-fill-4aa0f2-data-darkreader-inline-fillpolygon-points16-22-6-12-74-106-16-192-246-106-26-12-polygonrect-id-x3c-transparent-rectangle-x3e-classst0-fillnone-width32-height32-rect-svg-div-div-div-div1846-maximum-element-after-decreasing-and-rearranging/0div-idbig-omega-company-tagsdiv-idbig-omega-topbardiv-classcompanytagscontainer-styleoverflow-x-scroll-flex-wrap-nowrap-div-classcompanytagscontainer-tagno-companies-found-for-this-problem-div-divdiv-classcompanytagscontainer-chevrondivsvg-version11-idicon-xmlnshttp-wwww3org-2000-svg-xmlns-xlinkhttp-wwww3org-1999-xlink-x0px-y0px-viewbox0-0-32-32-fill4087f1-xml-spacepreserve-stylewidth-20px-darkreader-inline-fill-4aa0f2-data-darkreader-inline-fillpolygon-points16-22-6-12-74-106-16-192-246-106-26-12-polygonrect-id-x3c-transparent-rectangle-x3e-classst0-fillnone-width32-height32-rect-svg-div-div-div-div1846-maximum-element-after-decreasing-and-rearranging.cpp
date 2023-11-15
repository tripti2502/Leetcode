class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin(), arr.end());
         int ans = 1;
        for(int i=1; i<arr.size(); i++){
            if(arr[i] > ans)
                ans = ans + 1;
        }
        return ans;
    
    }
};

// sort(arr.begin(), arr.end());
// int n=arr.size();
// arr[0]=1;
// for(int i=1; i<n; i++){
//     if(arr[i]-arr[i-1]>1){
//         arr[i]=arr[i+1]+1;
//     }
// }
// arr[n-1];