// Last updated: 7/4/2025, 6:30:33 PM
class Solution {
public:
    pair<int,int> st,en ;
    vector<pair<int,int>> path ;
    vector<vector<int>> vis ;
    int sol = 0;

    int dx[4] = {1,-1,0,0};
    int dy[4] = {0,0,1,-1};

    vector<pair<int,int>> choices (pair<int,int> cur ,vector<vector<int>>& grid)
    {   
        vector<pair<int,int>> ans ;
        for(int i = 0 ; i<4; i++)
        {
            int nx = cur.first + dx[i];
            int ny = cur.second + dy[i];
            if((nx>=0 && nx<grid.size() && ny>=0 && ny<grid[0].size() && grid[nx][ny]==0 && vis[nx][ny]==19) || (nx>=0 && nx<grid.size() && ny>=0 && ny<grid[0].size()&&grid[nx][ny]==2 && vis[nx][ny]==19))
            {
                 ans.push_back({nx,ny});
            }
        }
        return ans;
    }

    void rec (pair<int,int> st ,vector<vector<int>>& grid)
    {
        if(st==en)
        {
        for(int i = 0 ; i<grid.size() ; i++)
        {
            for(int j = 0 ;j<grid[i].size();j++)
            {
                if(grid[i][j]==0 && vis[i][j]!=3)
                {
                    return ;
                }
            }
        }
        sol++;
        // cout << "Reached\n";
        return ;
        }

        for(auto i : choices(st,grid))
        {
            if(vis[i.first][i.second]==19)
            {
            path.push_back(i);
            vis[i.first][i.second]=3;
            rec(i,grid);
            path.pop_back();
            vis[i.first][i.second]=19;
            }

        }

    }

    int uniquePathsIII(vector<vector<int>>& grid) {
        for(int i = 0 ;i<grid.size();i++)
        {
            for(int j = 0 ; j<grid[0].size();j++)
            {
                if(grid[i][j]==1)
                {
                    st = {i,j};
                }
                else if (grid[i][j]==2)
                {
                    en = {i,j};
                }

            }
        }

        vis = vector<vector<int>> (grid.size(),vector<int>(grid[0].size(),19));
        path.push_back(st);
        rec(st,grid);

        return sol;
    }
};