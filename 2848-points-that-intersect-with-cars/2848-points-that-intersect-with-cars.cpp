class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
       // const int maxPoint = 101;  
    vector<int> points(101, 0);  
        for (const auto& interval : nums) {
            for (int i = interval[0]; i <= interval[1]; ++i) {
                points[i] = 1;
            }
        }
        
        int count = 0;
        for (int i = 1; i < 101; ++i) {
            if (points[i] == 1) {
                ++count;
            }
        }
        return count;
        
    }
};