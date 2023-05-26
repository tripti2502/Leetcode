class Solution {
public:
    string addStrings(string num1, string num2) {
        int carry=0;
        int i=num1.length()-1;
        int j=num2.length()-1;
        string sum;
        while (i>=0 || j>=0){
            int temp=carry;
            if (i>=0){
                temp+=(num1[i]-'0');   //converting char to int
            }
            if (j>=0){
                temp+=(num2[j]-'0');
            }
            sum+=(temp%10+'0');  //adding the value into string by converting from int to char
            carry=temp/10;
            i--;
            j--;
        }
        while (carry){
            sum+=(carry%10+'0');
            carry/=10;
        }
        reverse(sum.begin(),sum.end());  
        return sum;
    }
};