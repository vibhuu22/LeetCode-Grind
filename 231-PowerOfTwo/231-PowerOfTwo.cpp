// Last updated: 7/4/2025, 6:30:57 PM
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0){return false;}
        if((n&1)==1 && n!=1){
            return false;
        }

        if(n==1){return true;}
        

        int i=3;
        int r = n%i;

        while(i<n){
            int r = n%i ;
            if(r==0){
                return false;
    }
            i+=2;

        }
        if(r!=0){return true;}
        return 0;

    }

};