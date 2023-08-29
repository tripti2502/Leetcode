class Solution {
public:
    int bestClosingTime(string c) {
        int n=c.size();
        int maxi=0;
        int idx=0;
        pair<int,int> cnt={0,0};
        for(int i=0; i<n; i++){
            if(c[i]=='Y'){
                cnt.first++;
                cnt.second=i+1;
            }
            else{
                cnt.first--;
                cnt.second=i;
            }
            if(cnt.first>maxi){
                idx=cnt.second;
            }
            maxi=max(maxi, cnt.first);
        }
        return idx;
    }
};