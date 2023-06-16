//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
// 	    int mx=INT_MIN;
//         for(int i=0;i<n;i++)
//         {
//             mx=max(mx,arr[i]);
//         }
//         int ans=INT_MIN;
//         for(int i=0;i<n;i++)
//         {
//             if(arr[i]<mx)
//             {
//                 ans=max(ans,arr[i]);
//             }
//         }
//         if(ans==INT_MIN)
//         {
//             return -1;
//         }
//         return ans;
// 	}
// };
sort(arr,arr+n);
  for(int i=n-1;i>=0;i--)
  {
      if(arr[i]!=arr[n-1])
      return arr[i];
  }
  return -1;
}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends