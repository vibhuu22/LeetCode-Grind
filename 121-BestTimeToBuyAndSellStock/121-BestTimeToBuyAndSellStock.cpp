// Last updated: 7/4/2025, 6:31:08 PM
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0 ;
        int minprice = prices[0];
        for(int i=0 ; i<prices.size();i++)
        {
          profit = max(profit,prices[i]-minprice);
          minprice=min(minprice,prices[i]);
        }
        return profit ;
    }

};