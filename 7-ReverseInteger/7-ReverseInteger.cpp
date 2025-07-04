// Last updated: 7/4/2025, 6:31:30 PM
class Solution {
public:
    int reverse(int n) {
        int ans = 0 ;
  while(n!=0){
int digit = n%10 ;

n = n / 10 ;

if((ans)>(INT_MAX/10) || (ans)<(INT_MIN/10)){
    return 0 ;
}

ans = ans*10 + digit ;

}
 return ans;   }
};