class Solution {
public:
    string addBinary(string a, string b) {
        int it1=a.size()-1;
        int it2=b.size()-1;
        int carry=0;
        string ans="";
        while(it1>=0 || it2>=0 || carry)
        {
            if(it1>=0){
                carry+=a[it1]-'0';
                it1--;
            }
            if(it2>=0){
                carry+=b[it2]-'0';
                it2--;
            }
            
            ans+=(carry%2+'0');
                 carry=carry/2;
            
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};