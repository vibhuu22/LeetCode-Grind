// Last updated: 7/4/2025, 6:30:12 PM
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans = 0 ;
        for(int i = 0; i<accounts.size() ; i++)
        {   int weal = 0 ;
            for(int j = 0 ; j<accounts[i].size() ; j++ )
            {
                weal += accounts[i][j] ;
            }
            ans = max(weal,ans);
        }
        return ans;
    }
};