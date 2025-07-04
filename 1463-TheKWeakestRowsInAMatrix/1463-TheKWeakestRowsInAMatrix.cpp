// Last updated: 7/4/2025, 6:30:23 PM
class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        multiset<pair<int,int>> st ;

        for(int i = 0 ; i<mat.size() ; i++)
        {   
            int sol = 0 ;
            for(int j = 0 ; j<mat[i].size();  j++)
            {
               if(mat[i][j]==1)
               {
                sol++;
               } 
            }
            st.insert({sol,i});
        }

        // for(auto i : st)
        // {
        //     cout << i.first << " " << i.second << '\n';
        // }
        vector<int> ans ;
        auto it = st.begin();
        for(int i = 0 ; i<k ; i++)
        {
            ans.push_back(it->second);
            it++;
        }

        return ans;
    }

};