class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int i=0;
        while(i<flowerbed.size() && n!=0)
        {
            if(flowerbed[i]==1)
                i=i+2;
            else if(i+1<flowerbed.size())
            {
                if(flowerbed[i+1]==1)
                    i=i+3;
                else
                {
                    n--;
                    i=i+2;
                }
            }
            else 
            {
                n--;
                i++;

            }
        }
        if(n==0)
            return true;
        else
            return false;
    }
};