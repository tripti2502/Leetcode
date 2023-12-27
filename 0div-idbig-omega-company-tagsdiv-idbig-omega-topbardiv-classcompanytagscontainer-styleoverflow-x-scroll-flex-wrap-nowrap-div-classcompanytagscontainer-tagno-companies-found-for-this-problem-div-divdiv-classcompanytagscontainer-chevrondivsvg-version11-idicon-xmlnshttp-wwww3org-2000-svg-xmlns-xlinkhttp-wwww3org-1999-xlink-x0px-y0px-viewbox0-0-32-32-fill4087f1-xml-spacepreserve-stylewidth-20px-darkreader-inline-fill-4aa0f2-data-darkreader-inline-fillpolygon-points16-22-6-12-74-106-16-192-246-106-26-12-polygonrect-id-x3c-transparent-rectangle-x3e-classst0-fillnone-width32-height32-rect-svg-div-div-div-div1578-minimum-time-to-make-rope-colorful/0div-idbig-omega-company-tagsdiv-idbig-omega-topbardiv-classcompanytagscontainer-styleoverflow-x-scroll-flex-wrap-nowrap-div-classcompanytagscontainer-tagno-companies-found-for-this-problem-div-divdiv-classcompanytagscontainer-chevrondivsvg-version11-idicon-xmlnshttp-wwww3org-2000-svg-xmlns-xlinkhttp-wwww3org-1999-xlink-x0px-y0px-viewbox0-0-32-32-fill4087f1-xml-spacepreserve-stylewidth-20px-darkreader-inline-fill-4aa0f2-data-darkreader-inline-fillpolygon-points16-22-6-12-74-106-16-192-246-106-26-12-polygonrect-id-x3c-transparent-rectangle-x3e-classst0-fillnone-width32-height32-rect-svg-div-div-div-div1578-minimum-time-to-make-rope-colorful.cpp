class Solution {
public:
    int minCost(string c, vector<int>& t) {
        int minTime = 0, n=c.size();
        char prevChar='$';
        int prevTime=0;
        for(int i=0;i<n;i++) {
            if(c[i]==prevChar) {
                if(prevTime < t[i]) {
                    minTime += prevTime;
                    prevTime = t[i];
                } 
                else minTime += t[i];
            }
            else {
                prevTime = t[i];
                prevChar = c[i];
            }
        }
        return minTime;
    }
};
