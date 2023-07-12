class Solution {
public:
    int evalRPN(const vector<string>& tokens) {
        stack<long> st;
        for(const auto& token: tokens){
            long a;
            long b;
            if(token == "+"){
                a = st.top(); st.pop();
                b = st.top(); st.pop();
                st.push(b + a);
            }
            else if(token == "-"){
                a = st.top(); st.pop();
                b = st.top(); st.pop();
                st.push(b - a);
            }
            else if(token == "*"){
                a = st.top(); st.pop();
                b = st.top(); st.pop();
                st.push(b * a);
            }
            
            else if(token == "/"){
                a = st.top(); st.pop();
                b = st.top(); st.pop();
                st.push(b / a);
            }
            else{
                st.push(stoi(token));
            }
        }
        return st.top();
    }
};

