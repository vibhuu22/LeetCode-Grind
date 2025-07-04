// Last updated: 7/4/2025, 6:30:00 PM
class Solution {
public:
    bool khatam = 0 ;
    string str ;
    string smol ;
    char arr[9] = {'1','2','3','4','5','6','7','8','9'};
    bool check (int level , char choice)
    {
        for(int pind = 0 ; pind<level ; pind++)
        {
            if(str[pind]==choice)
            {
                return 0 ;
            }
        }
        return 1 ;
    }
    void rec(int level , string p)
    {   
        if(khatam)
        {
            return ;
        }
        if(level==p.length()+1)
        {   
            // check all formations with pattern
            for(int i = 0 ; i<p.size();i++)
            {
                if(p[i]=='I')
                {
                    if(str[i]>str[i+1])
                    {
                        return ;
                    }
                }
                else if (p[i]=='D')
                {
                    if(str[i]<str[i+1])
                    {
                        return;
                    }
                }
            }
            if(str.size()==p.length()+1)
            {   
                khatam = 1 ;
                smol = str;
                // cout << str << '\n';
            }
 
            return ;
        }

        for(int i = 0; i<9 ; i++)
        {   
            if(check(level,arr[i]))
            {
            str.push_back(arr[i]);
            rec(level+1,p);
            str.pop_back();
            }

        }
    }

    string smallestNumber(string pattern) {
        
        rec(0,pattern); 

        return smol ;
    }
};