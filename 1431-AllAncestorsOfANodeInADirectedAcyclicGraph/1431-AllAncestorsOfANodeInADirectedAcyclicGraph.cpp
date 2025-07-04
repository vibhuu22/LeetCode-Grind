// Last updated: 7/4/2025, 6:30:24 PM
class Solution {
public:
    int _n ;
    vector<vector<int>> g ;
    vector<vector<int>> sol ;
    vector<int> vis ;
    void dfs(int node)
    {
        vis[node]= 1 ;
        for(auto i  : g[node])
        {
            if(!vis[i])
            {
                dfs(i);
            }
        }
    }
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
        _n = n ;
        g.resize(n);
        for(int i = 0 ;i<edges.size(); i++)
        {
            g[edges[i][0]].push_back(edges[i][1]);
        }
        sol.resize(n);
        for(int i = 0 ; i<n ; i++)
        {
            vis.assign(n,0);
            dfs(i);
            vis[i]=0;
            for(int j = 0 ; j<n ; j++)
            {
                if(vis[j]==1)
                {
                    sol[j].push_back(i);
                }
            }
        }
        return sol ;
    }   
};