//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int search(int A[], int N)
	{
	   int i=0;
	   int j=N-1;
	   //if(j==0) return A[0];
	   while(i<=j)
	   {
	        int mid=i+(j-i)/2;
	        if (mid%2==0)
	       {
                if (A[mid]==A[mid+1]) 
                {
                    i=mid+1;
                }
                else j=mid-1;
            }
            else
            {
                if (A[mid]==A[mid-1])
                {
                    i=mid+1;
                }
                else j=mid-1;
            }
        }
        return A[i];
	   
  
	}
};	
	  

//{ Driver Code Starts.

// Driver program
int main()
{
    int t,len;
    cin>>t;
    while(t--)
    {
        cin>>len;
        int arr[len];
        for(int i=0;i<len;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.search(arr, len)<<'\n';
    }
    return 0;
}

// } Driver Code Ends