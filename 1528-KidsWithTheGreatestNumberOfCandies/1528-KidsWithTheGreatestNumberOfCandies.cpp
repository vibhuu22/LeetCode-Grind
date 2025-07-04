// Last updated: 7/4/2025, 6:30:16 PM
class Solution {
public:
    bool check(int give ,vector<int> candies , int extraCandies)
    {
        candies[give]+=extraCandies ;
        int mx = candies[give] ;
        for(auto i : candies)
        {
            if(i > mx)
            {
                return 0 ;
            }
        }
        return 1;
    }
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans ;
        for(int i = 0; i<candies.size();i++)
        {
            ans.push_back(check(i,candies,extraCandies)) ;
        }
        return ans ;       
    }
};