// Last updated: 7/4/2025, 6:30:59 PM
class Solution {
public:
    vector<vector<int>> g ;
    vector<int>vis;
    bool is_fin = 1 ;
    void dfs (int node)
    {    
        vis[node]=1;
        for(auto i : g[node])
        {   
            // cout << "Visiting Neighbourss of " << node << '\n';
            //     cout << "Neighbour of " << node << "= node : " << i << '\n';
                cout << vis[i] << '\n';
                if(!vis[i])
                dfs(i);
                else if (vis[i]==1)
                {   
                    // cout << "Inside node = " << node << " Level = " << i << '\n';
                    is_fin = 0 ;
                } 
    
        }
        vis[node]=2;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        g.resize(numCourses);
        vis.assign(numCourses,0);
        for(int i = 0 ; i<prerequisites.size() ; i++)
        {   
            int a = prerequisites[i][0];
            int b = prerequisites[i][1];
            g[a].push_back(b);
        }
       for(int i = 0 ; i<vis.size() ; i++)
       {
        if(!vis[i])
        dfs(i);
       }
        return is_fin;
    }
};