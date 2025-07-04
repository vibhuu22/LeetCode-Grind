// Last updated: 7/4/2025, 6:31:01 PM
class Solution {
public:
    vector<vector<int>> vis ;

    int dx[4] = {1,-1,0,0};
    int dy[4] = {0,0,1,-1};

    vector<pair<int,int>> neighbours (pair<int,int> cur ,   vector<vector<char>>& g 
)
{   
        vector<pair<int,int>> vv ;
        for(int i = 0 ;i<4 ;i++)
        {
            int nx= cur.first + dx[i];
            int ny = cur.second + dy[i];
            if(nx>=0 && nx<g.size() && ny>=0 && ny<g[nx].size() && g[nx][ny]=='1')
            {
                vv.push_back({nx,ny});
            } 
        }
        return vv ;
    }

    void dfs (pair<int,int> st, vector<vector<char>> &grid 
 )
    {
        vis[st.first][st.second]= 1 ;

        for(auto i : neighbours(st,grid))
        {   
            if(vis[i.first][i.second]==-1)
            {
                dfs(i,grid);
            }
        }
        
    }
    int numIslands(vector<vector<char>>& grid) {
        vis.resize(grid.size());
        for(int i = 0 ; i<grid.size();i++)
        {
            for(int j = 0 ; j<grid[i].size();j++)
            {
                vis[i].push_back(-1);
            }
        }
        int ans = 0 ;
        for(int i = 0 ; i<vis.size();i++)
        {
            for(int j = 0 ; j<vis[i].size();j++)
            {
                if(vis[i][j]==-1 && grid[i][j]=='1')
                {   
                    ans++; 
                    pair<int,int> x = {i,j};
                    dfs(x,grid);
                }
            }
        } 
        return ans ;  
    }
};