// Last updated: 7/4/2025, 6:29:38 PM
class Solution {
public:
    vector<vector<int>> g ;
    vector<int> vis ;

    bool inter (vector<int> a , vector<int> b , int k)
    {   
        int ch[101] = {0};
        for(int i = 0 ; i<a.size();i++)
        {
            ch[a[i]]++;
            if(ch[a[i]]>=1){
                ch[a[i]]=1;
            }
        }
        int tes = 0 ;
                for(int i = 0 ; i<b.size();i++)
        {   
            if(ch[b[i]]==1)
            {
                ch[b[i]]++;
                tes++;
            }

        }

        if(tes>=k) return 1 ;

        return 0 ;
     
        
        
    }
    void dfs (int node)
    {
        vis[node]=1 ;
        for(auto i : g[node])
        {
            if(!vis[i])
            {
                dfs(i);
            }
        }
    }
    int numberOfComponents(vector<vector<int>>& properties, int k) {
        g.resize(properties.size());

        for(int i = 0 ; i<properties.size() ; i++)
        {
            for(int j = i+1 ; j<properties.size() ; j++)
            {
                if(inter(properties[i],properties[j],k))
                {
                    g[i].push_back(j);
                    g[j].push_back(i);
                }
            }
        }

        int cc_com = 0 ;
        vis.assign(g.size(),0);
        for(int i = 0 ; i<vis.size(); i++)
        {
            if(!vis[i])
            {
                cc_com++;
                dfs(i);
            }
        }
        return cc_com;
    }
};