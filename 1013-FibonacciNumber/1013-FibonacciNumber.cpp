// Last updated: 7/4/2025, 6:30:34 PM
class Solution {
public:
    int fib(int n) {
         // base case
  if(n==0)
  {
    return 0 ;
  }
  if(n==1)
  return 1 ;

  // recursive call 

  int num = fib(n-1) + fib(n-2);

  return num ;
    }
};