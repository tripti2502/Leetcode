class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int32_t ans = 0;
        int shift = 31;
        while (n > 0) {
            ans ^= ((n % 2) << shift);
            n >>= 1;
            --shift;
        }
        
        return ans;
    }
};