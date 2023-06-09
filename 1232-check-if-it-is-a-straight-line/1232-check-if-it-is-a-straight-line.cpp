class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int dy,dx,ndy,ndx,i;
        
            for(i=1;i<coordinates.size();i++)
            {
                dy=coordinates[1][1] - coordinates[0][1];
               dx=coordinates[1][0] - coordinates[0][0];
                ndx=coordinates[i][0] - coordinates[0][0];  
                ndy=coordinates[i][1] - coordinates[0][1];  
               
                if(ndx * dy != ndy * dx) // if (x2-x1)*(y1-y0) = (x1-x0)(y2-y1), then a straight line, otherwise not
                    return false;
            }
        return true;
    }
};