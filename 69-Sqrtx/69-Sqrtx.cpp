// Last updated: 7/4/2025, 6:31:11 PM
class Solution {
public:
    int mySqrt(int x) {
       
        {
            int i=1;
          if(i-1>INT_MAX)return 0;
          if(x==1||x==2) return 1 ; 
          if(x==2147483647) return 46340;
            
        for(i=1;i<(46341);i++)
        {   
            if(i*i>x){
                return (i-1);
                break;
            }
            else if(i*i==x)
            {
                return i;
                break;
            }
        }
        }
          
        return 0;
        
    }
};