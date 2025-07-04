// Last updated: 7/4/2025, 6:30:07 PM
class Solution {
public:
    string removeOccurrences(string ans, string part) {

        int start = ans.find(part) ;
        while( start != string::npos)
    {
        ans.erase(start,part.length());
        start = ans.find(part);
    }
    return ans;
    }
};