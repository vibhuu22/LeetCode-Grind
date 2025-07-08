// Last updated: 7/8/2025, 7:26:40 PM
class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
        int n = boxGrid.size();
        int m = boxGrid[0].size();
        vector<vector<char>> ans (m,vector<char>(n)) ;
        
        for(int i = 0 ; i<n;i++)
        {
            for(int j = 0 ; j<m ; j++)
            {
                ans[j][i] = boxGrid[i][j];
            }
        }
        for(int j = 0 ; j<n ; j++)
        {   
            int ind = -1 ;
            for(int i = m-1 ; i>-1 ; i--)
            {
                if(ans[i][j]=='#' && ind!=-1)
                {
                    swap(ans[i][j],ans[ind][j]);
                    ind = ind-1 ;
                }
                else if (ans[i][j]=='.' && ind==-1)
                {
                    ind = i ;
                }
                else if (ans[i][j]=='*')
                {
                    ind = i-1 ;
                }
            }
        }

            // cout << "AFter transformation\n";
            int i1 = 0 ; 

            vector<vector<char>> ans2 (m,vector<char>());

            for(int i = 0 ; i<m ; i++)
            {
                for(int j = n-1 ; j>=0 ; j--)
                {
                    ans2[i].push_back(ans[i][j]);
                }
            }
          return ans2;    



        // cout << "Fina;\n";
        //         for(int i = 0 ; i<m ; i++)
        // {
        //     for(int j = 0 ; j<n ; j++)
        //     {
        //         cout << ans2[i][j] << " " ;
        //         // ans2[i1].push_back(ans[i][j]);
        //     }

        //     cout << '\n';
        // }



      
    }
};