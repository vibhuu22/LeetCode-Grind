// Last updated: 7/4/2025, 6:29:46 PM
class Solution {
public:
    string s ;
    vector<string> all_sol ;
    void rec(int level,int sz)
    {
        if(level==sz)
        {   
            for(int i = 1 ; i<s.size();i++)
            {
                if(s[i]=='0' && s[i-1]=='0')
                {
                    return ;
                }
            }
            all_sol.push_back(s);
            // cout << s << '\n';
            return ;
        }

    
        s.push_back('0');
        rec(level+1,sz);
        s.pop_back();

        s.push_back('1');
        rec(level+1,sz);
        s.pop_back();
    }
    vector<string> validStrings(int n) {
        rec(0,n);
        return all_sol ;
    }
};