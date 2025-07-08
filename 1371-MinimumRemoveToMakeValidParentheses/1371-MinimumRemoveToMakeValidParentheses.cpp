// Last updated: 7/8/2025, 7:26:52 PM
class Solution {
public:
    string minRemoveToMakeValid(string s) {
    string ans ;
    int cur_dep = 0 ;

    for(int i = 0 ; i<s.size();i++)
    {
        if(s[i]==')')
        {
            if(cur_dep == 0)continue;

            if(cur_dep>0)
            {
                cur_dep--;
                ans.push_back(s[i]);
            }

        }else if (s[i]=='(')
        {
            if(cur_dep>=0)
            {   
                int chk = -1 ;
                for(int j = i+1 ; j<s.size();j++)
                {
                    if(s[j]==')')
                    {
                        chk++;
                        if(chk>=cur_dep)break;
                    }
                }
                if(chk>=cur_dep)
                {
                ans.push_back(s[i]);
                cur_dep++;
                }
            }
        }else 
        {
            ans.push_back(s[i]);
        }
    }
 
    return ans;

    }
};