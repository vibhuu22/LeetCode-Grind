// Last updated: 7/4/2025, 6:30:32 PM
class Solution {
public:
    int bitwiseComplement(int n) {
   int ans = 0 ;
   int i = 0 ;
   int k = 1 ;
   if(n!=0){
        while(n!=0){
            int digit = (n&1);
            if(digit==0){
                digit+=1 ;
            }
            else{digit-=1 ;}
          
            
             n = n >> 1 ;
             ans = ((digit*(pow(2,i)))+ans) ;
             i = i + 1 ;
        }
   }
        else{return k ;}

     return ans ;
        
       
      
    }
};