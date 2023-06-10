class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rec) {
        map<double,int> mp;
        long long ans=0;
       for(int i=0;i<rec.size();i++){
           double curr= (double)rec[i][0]/(double)rec[i][1];
          if(mp.count(curr)==true){     // if(mp.find(curr)!=mp.end()){
               ans+=mp[curr];
           }
           mp[curr]++;
       }
       return ans;
    }
};