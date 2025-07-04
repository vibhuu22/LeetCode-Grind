// Last updated: 7/4/2025, 6:31:27 PM
class Solution {
public:

     vector<string> s ;

    string ans ;
    int depth = 0 ;

    void rec (int level , int n)
    {   
        // base case
        if(level == 2*n)
        {
            if(depth == 0)
            {
                s.push_back(ans);
            }

            return ;
        }


        // choices
        {
            // open
            if(depth>=0)
            {
                ans+='(';
                depth++;
                rec(level+1,n);
                ans.pop_back();
                depth--;
            }

        }

        {
            // close
            ans+=')';
            depth--;
            rec(level+1,n);
            ans.pop_back();
            depth++;
        }

    }
    vector<string> generateParenthesis(int n) {
        // depth <= n
        // level = 2*n ;
        // choices = 2 -> "(" or ")"
        // check (depth condition)
        // move
        rec(0,n);

        return s ;
    }
};