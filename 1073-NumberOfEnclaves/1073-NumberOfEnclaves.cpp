// Last updated: 7/4/2025, 6:30:29 PM
class Solution {
public:
    vector<vector<int>> vis ;
    map<int,vector<pair<int,int>>> mp ;

    int dx[4] = {1,-1,0,0} ;
    int dy[4] = {0,0,-1,1} ;
    
    vector<pair<int,int>> neighbours (pair<int,int> state , vector<vector<int>>& grid)
    {   
        vector<pair<int,int>> ans ;
        for(int i = 0 ; i<4 ; i++)
        {   
            int nx = state.first + dx[i];
            int ny = state.second + dy[i];
            if(nx>=0 && nx<grid.size() && ny>=0 && ny<grid[nx].size() && grid[nx][ny]==1)
            {
                ans.push_back({nx,ny});
            }
        }
        return ans ;
    }

    void dfs (pair<int,int> state ,vector<vector<int>>& grid,int cc)
    {   
        vis[state.first][state.second] = cc;
        mp[cc].push_back(state);
        for(auto i : neighbours(state,grid))
        {
            if(vis[i.first][i.second]==0)
            {
                dfs(i,grid,cc);
            }
        }
    }

    int numEnclaves(vector<vector<int>>& grid) {
        vis.resize(grid.size());
        for(int i = 0; i<grid.size();i++)
        {
            for(int j = 0 ;j<grid[i].size();j++)
            {
                vis[i].push_back(0);
            }
        }
        int cc = 0 ;

        for(int i = 0 ; i<vis.size();i++)
        {
            for(int j = 0 ; j<vis[i].size(); j++)
            {
                if(vis[i][j]==0 && grid[i][j]==1)
                {   
                    cc++;
                    // cout << "Component " << cc << '\n';
                    dfs({i,j},grid,cc);
                }
            }
        }

        // for(int i = 0 ; i<vis.size();i++)
        // {
        //     for(int j = 0 ; j<vis[i].size(); j++)
        //     {
        //         cout << vis[i][j] << " ";
        //     }
        //     cout << '\n';
        // }

        int soln = 0 ;
        
        for(auto i : mp)
        {   
            int add = 1 ;
        
            for(auto z : i.second)
            {   
                if(z.first == 0 || z.first == (grid.size()-1)|| z.second == 0 || z.second == (grid[z.first].size()-1))
                {
                    add = 0 ;
                    break;
                }
            }
            if(add)
            {
                    soln += i.second.size();
            }
        }

        return soln;
    }
};