class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int pval =0;
        int nval=0;
        for(auto ch:moves)
        {
            if(ch=='L')
            {
                pval = pval-1;
                nval = nval-1;
            }
            else if(ch=='R')
            {
                pval = pval+1;
                nval = nval+1;
            }
            else
            {
                pval = pval+1;
                nval = nval-1;
            }
        }
        return max(abs(pval),abs(nval));
    }
};