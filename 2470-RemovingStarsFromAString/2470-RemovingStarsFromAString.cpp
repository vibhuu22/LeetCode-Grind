// Last updated: 7/8/2025, 7:26:34 PM
class Solution {
public:
    string ans ;
    string removeStars(string s) {
        for(auto i : s)
        {
            if(i=='*')
            {
                ans.pop_back();
            }else{
                ans.push_back(i);
            }
        }
        return ans ;
    }
};