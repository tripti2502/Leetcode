class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int res=0;
        for(int i=0; i<tickets.size(); i++){
            res+=min(tickets[k]-(i>k), tickets[i]);
        }
        return res;
    }
};
