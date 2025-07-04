// Last updated: 7/4/2025, 6:30:48 PM
class Solution {
public:
    bool isPerfectSquare(int num) {
        for(long long i = 1 ; i*i<=num ; i++)
        {
            if(i*i == num)
            {
                return 1 ;
            }
        }
        return 0 ;
    }
};