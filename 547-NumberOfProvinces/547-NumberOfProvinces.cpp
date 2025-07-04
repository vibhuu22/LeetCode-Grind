// Last updated: 7/4/2025, 6:30:44 PM
class Solution {
public:
    vector<set<int>> g ;
    vector<int> vis ;
    int n ;
    void dfs (int st)
    {
        vis[st]=1 ;
        for(auto i : g[st])
        {
            if(!vis[i])
            {
                dfs(i);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        n = isConnected.size() ;
        g.resize(n);
        for(int i = 0 ; i<n ;i++)
        {
            for(int j = 0 ; j<n ; j++)
            {
                if(isConnected[i][j]==1)
                {
                    g[i].insert(j);
                    g[j].insert(i);
                }
            }
        }
        vis = vector<int> (n,0);
        int prov = 0 ;
        for(int i = 0 ; i<n ; i++)
        {
            if(!vis[i])
            {
                prov++;
                dfs(i);
            }
        }
        return prov ;
    }
};