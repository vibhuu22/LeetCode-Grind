// Last updated: 7/4/2025, 6:31:28 PM
class Solution {
public:
    bool isPalindrome(int x) {
        int i ;
        int dig[100];
        if(x<0)
        {
            return false;
        }
        for( i=0;x>0;i++)
        { 
             dig[i] = x%10 ;
            x = x/10 ;
        }
        int s=0,e=i-1;
        for(;s<=e;s++,e--)
        {
            if(dig[s]!=dig[e])return false;
        }
        return true;
    }
};