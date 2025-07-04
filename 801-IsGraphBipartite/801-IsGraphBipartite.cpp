// Last updated: 7/4/2025, 6:30:38 PM
class Solution {
public:
    vector<int> vis ;
    bool is = 1 ;
    void dfs (int node , vector<vector<int>>& graph,int col)
    {
        vis[node]=col;

        for(auto i : graph[node])
        {
            if(!vis[i])
            {
                dfs(i,graph,3-col);
            }
            else
            {
                if(vis[i]==vis[node]){
                    is = 0;
                } 
            }
        }
    }

    bool isBipartite(vector<vector<int>>& graph) {
    vis.assign(graph.size(),0);
    int col = 1;
    for(int i = 0 ; i<vis.size(); i++)
    {
        if(!vis[i])
        {
            dfs(i,graph,col);
        }
    }

    return is ;

    }
};