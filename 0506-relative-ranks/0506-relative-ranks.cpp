class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int,int>>q;
        for(int i=0;i<size(score);i++)
            q.push({score[i],i});
        int i=0;
        vector<string>a(size(q));
        while(!q.empty()){
            a[q.top().second]=i==0?"Gold Medal":i==1?"Silver Medal":i==2?"Bronze Medal":to_string(i+1);
            i++;
            q.pop();
        }
        return a;
    }
};

// 	// initailize a vector of strings to return ans.
//     vector<string>ans;
//     priority_queue<pair<int,int>>pq;
    
//     for(int i=0; i<score.size(); i++)
//     {
//         pq.push({score[i],i});
//     }
// 	// after inserting the scores in priority queue with their index.
// 	// everytime we pop the top element from priority queue we will get the top scorer as compared to other in priority queue.
	
//     int idx;
// 	// assigning their positions according to the index.
//      if(!pq.empty())
//      {
//          idx = pq.top().second;
//          ans[idx] = "Gold Medal";
//          pq.pop();
//      }
//      if(!pq.empty())
//      {
//          idx = pq.top().second;
//          ans[idx] = "Silver Medal";
//          pq.pop();
//      }
//      if(!pq.empty())
//      {
//          idx = pq.top().second;
//          ans[idx] = "Bronze Medal";
//          pq.pop();
//      }
//     int x = 4;
//      while(!pq.empty())
//      {
//          idx = pq.top().second;
//          ans[idx] = to_string(x);
//          pq.pop();
//          x++;
//      }
	
//     return ans;
// }