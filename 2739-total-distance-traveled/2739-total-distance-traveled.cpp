class Solution {
public:
    int distanceTraveled(int maT, int add) {
        long long ans=0;
    while(maT){
        if(maT>=5){
            ans+=50;
            maT-=5;
            if(add>=1) {
                maT+=1;
                add-=1;
            }
        }
        else{
            ans=ans + maT*10;
            maT=maT-maT;
        }
    }
    return ans;
    }
};