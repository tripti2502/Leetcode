class Solution {
public:
//     int countSymmetricIntegers(int low, int high) {
//         int ans = 0;
//     for(int i = low; i <= high; ++i){
//         string s = to_string(i);
//         int t = 0, n = s.size();
//         for(int j = 0; j < n/2; ++j) 
//         { 
//             t += s[j] - s[n - j - 1]; 
//         }
//         if(n%2 == 0 && t == 0) 
//             ans++;
//     }
//     return ans;
        
//     }
// };



bool isSymmetric(int num) {
    string s = to_string(num);
    int n = s.length();
    
    // If the number of digits is odd, it can't be symmetric
    if (n % 2 != 0)
        return false;

    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < n / 2; i++) {
        sum1 += (s[i] - '0');
        sum2 += (s[n - 1 - i] - '0');
    }

    return sum1 == sum2;
}

int countSymmetricIntegers(int low, int high) {
    int count = 0;
    
    for (int num = low; num <= high; num++) {
        if (isSymmetric(num)) {
            count++;
        }
    }
    
    return count;
}

};