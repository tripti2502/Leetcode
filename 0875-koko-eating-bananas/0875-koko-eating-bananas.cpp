class Solution {
public:
    int minEatingSpeed(vector<int>& p, int h) {
        sort(p.begin(),p.end());
        int low=1,high=p[p.size()-1];
        int res=-1;
        while(low<=high){
            int mid=low +(high-low)/2;
            long long time=0;
            for(int i=0;i<p.size();i++){
                time+=(p[i]+mid-1)/mid;
            }
            if(time<=h){
                res=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
       return res;
    }
};