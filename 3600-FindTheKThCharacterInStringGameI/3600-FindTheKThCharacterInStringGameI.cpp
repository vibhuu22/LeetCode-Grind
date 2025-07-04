// Last updated: 7/4/2025, 6:29:42 PM
class Solution {
public:
    string word = "a";
    char kthCharacter(int k) {
        while(word.size()<k)
        {   
            int temp = word.size();
            for(int i = 0 ; i<temp ; i++)
            {
                char p = word[i]+1;
                if(word[i]=='z')
                {
                    p = 'a';
                }
                word.push_back(p);
                if(word.size()==k) break;
            }
            // for(auto i : word)
            // {
            //     char p = i+1 ;
            //     if(i=='z')
            //     {
            //         p = 'a';
            //     }
            //     word.push_back(p);
            //     if(word.size()==k) break;
            // }
        }
        return word[k-1] ;
    }
};