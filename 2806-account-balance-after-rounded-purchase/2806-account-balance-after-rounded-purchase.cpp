class Solution {
public:
     int accountBalanceAfterPurchase(int purchaseAmount) {
//      int i=100-purchaseAmount;
//         if(purchaseAmount%10>=5) return i-(10-(purchaseAmount%10));
//         return i+purchaseAmount%10;
        
//     }
// };
// return 100 - (purchaseAmount + 5) / 10 * 10;



        int i = (purchaseAmount + 5) / 10 * 10; 
    int j = 100 - i;
    return j;
    }
};