// Last updated: 7/4/2025, 6:30:36 PM
class Solution {
public:
    vector<int> vis ;
    int n;
    void dfs (int node,vector<vector<int>>& rooms)
    {
        vis[node] = 1 ;
        for(auto i : rooms[node])
        {
            if(!vis[i])
            {
                dfs(i,rooms);
            }
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        n = rooms.size();
        vis.assign(n,0);
        dfs(0,rooms);

        for(auto i : vis)
        {
            if(i==0) return false ;
        }

        return true;
    }
};