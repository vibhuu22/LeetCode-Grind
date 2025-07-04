// Last updated: 7/4/2025, 6:30:25 PM
class Solution {
public:
    int subtractProductAndSum(int n) {

    if((n<1)||(n>(pow(10,5)))){
        return 0 ;
    }
    int sex = 1 , ramu = 0 ;



for(int i = 1 ; n>0 ; i++){

    int randi = n%10 ;

    n = n / 10 ;

    sex = sex*randi ;
    ramu = ramu + randi ;


}

int ans = sex - ramu ;

return ans;








        
    }
};