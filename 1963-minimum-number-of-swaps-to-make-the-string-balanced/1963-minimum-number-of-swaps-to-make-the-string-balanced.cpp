class Solution {
public:
    int minSwaps(string s) {
        int count=0;
        int maxi = INT_MIN;
        for(char ch :s)
        {
            if(ch==']') count++;
            else if(ch=='[') count--;
             maxi= max(maxi,count);
        }
        return (maxi+1)/2;
    }
};
//         stack<char> st;
//         for( char ch : s)
//         {
//             if(ch=='[')
//             {
//                 st.push(ch);
//             }
//             else
//             {
//                 if(!st.empty()&&st.top()=='[')
//                 }
//                     st.pop();
//                 }
//                 else
//                 {
//                     count++;
//                 }
//             }
//         }
//         return (count+1)/2;
//     }
// };


