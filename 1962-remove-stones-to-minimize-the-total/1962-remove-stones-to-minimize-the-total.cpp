class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        int n=piles.size();
        priority_queue<int> pq;
        for(int i=0; i<n; i++){
            pq.push(piles[i]);
        }
        while(!pq.empty() && k){
            int top=pq.top();
            pq.pop();
            pq.push(top-(top/2));  //pq.push((top+1)/2);
            k=k-1;
        }
        int sum=0; 
        while(!pq.empty()){
            sum=sum+pq.top();
            pq.pop();
        }
        return sum;
    }
};