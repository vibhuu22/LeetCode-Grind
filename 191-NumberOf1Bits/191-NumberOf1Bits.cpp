// Last updated: 7/4/2025, 6:31:02 PM
class Solution {
public:
    int hammingWeight(uint32_t n) {
         int count = 0 ;

    for(int i = 0 ; n>0 ; i++) {
        if((n&1)==1){
            ++count; 
        }
        n = n >> 1 ;
    }
    return count ;
    }
};