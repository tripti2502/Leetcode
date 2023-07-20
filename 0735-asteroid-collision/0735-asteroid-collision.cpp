class Solution {
public:
    vector<int> asteroidCollision(vector<int>& as) {
        stack<int>st;
        int n=as.size();
        
        for(int i=0; i<n; i++){
            if(as[i]>0 || st.empty()){
                st.push(as[i]);
            } 
            else{
                while(!st.empty() && st.top()>0 && st.top()<abs(as[i])){
                    st.pop();
                }
                if(!st.empty() && st.top()==abs(as[i])){
                    st.pop();
                }
                else{
                    if(st.empty() || st.top()<0){
                        st.push(as[i]);
                    }
                }
            }
        }
        vector<int> ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
     reverse(ans.begin(),ans.end());
     return ans;
        
    }
};