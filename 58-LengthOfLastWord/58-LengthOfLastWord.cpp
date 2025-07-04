// Last updated: 7/4/2025, 6:31:14 PM
class Solution {
public:
    int lengthOfLastWord(string s) {
        s+=" ";
        // length of last word
        string ans; 
        int ans2 = 0 ;
        for(int i=0 ; i<=s.length();i++)
        {
            if(s[i] != ' ')
            {
                ans+=s[i];
            }
            else 
            {   
                if(ans.length()!=0)ans2=ans.length();
                ans.clear();
            }
        }

        return ans2;
    }
};