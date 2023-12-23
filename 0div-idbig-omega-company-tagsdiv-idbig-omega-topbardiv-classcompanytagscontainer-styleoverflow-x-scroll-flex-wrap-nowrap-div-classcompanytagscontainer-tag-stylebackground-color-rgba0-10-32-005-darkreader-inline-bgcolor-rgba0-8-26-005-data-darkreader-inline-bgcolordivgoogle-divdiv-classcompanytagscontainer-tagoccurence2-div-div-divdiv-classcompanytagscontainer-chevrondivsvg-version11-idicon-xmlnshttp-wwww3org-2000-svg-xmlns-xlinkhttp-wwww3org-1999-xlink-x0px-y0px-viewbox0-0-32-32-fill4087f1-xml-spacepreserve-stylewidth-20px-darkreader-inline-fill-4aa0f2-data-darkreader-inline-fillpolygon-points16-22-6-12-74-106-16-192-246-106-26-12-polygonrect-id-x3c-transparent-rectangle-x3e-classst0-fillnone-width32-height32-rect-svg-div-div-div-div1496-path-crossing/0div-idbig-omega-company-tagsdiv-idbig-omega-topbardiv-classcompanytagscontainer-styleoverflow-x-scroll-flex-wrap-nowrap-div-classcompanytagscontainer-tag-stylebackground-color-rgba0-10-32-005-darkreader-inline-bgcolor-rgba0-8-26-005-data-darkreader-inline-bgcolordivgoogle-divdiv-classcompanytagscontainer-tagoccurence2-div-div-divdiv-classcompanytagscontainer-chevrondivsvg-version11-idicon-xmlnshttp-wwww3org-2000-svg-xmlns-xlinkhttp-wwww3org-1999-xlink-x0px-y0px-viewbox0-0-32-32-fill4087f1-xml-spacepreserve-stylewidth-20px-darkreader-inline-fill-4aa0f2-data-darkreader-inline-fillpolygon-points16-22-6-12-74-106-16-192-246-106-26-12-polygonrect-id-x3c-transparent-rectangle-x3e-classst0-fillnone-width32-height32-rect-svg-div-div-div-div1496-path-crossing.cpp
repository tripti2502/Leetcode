class Solution {
public:
    bool isPathCrossing(string path) {
         int x=0,y=0;
        set<pair<int,int>>s;
        s.insert({0,0});
        for(char it: path){
            if(it == 'N') y++;
            else if(it == 'S')y--;
            else if(it == 'E') x++;
            else x--;
            
            if(s.find({x,y}) != s.end()) return true;
            else s.insert({x,y});
        }
        return false;
    }
};