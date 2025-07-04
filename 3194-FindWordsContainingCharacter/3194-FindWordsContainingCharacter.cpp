// Last updated: 7/4/2025, 6:29:52 PM
class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {

        vector<int> ans ;

        for(int i = 0 ; i<words.size();i++)
        {   
            if(words[i].find(x)!= -1 ) // here we can use string::npos or -1 both
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};