// Last updated: 7/4/2025, 6:31:18 PM
class Solution {
public:
    vector<int> queens ;
    vector<string> grid;
    vector<vector<string>> all_sols ;

    bool check (int level , int col)
    {
        for(int prow = 0; prow<level ; prow++)
        {
            int pcol = queens[prow];
            if((pcol==col) || (abs(pcol-col)==abs(prow-level)))
            return 0 ;
        }
        return 1; 
    }
    void rec (int level , int m)
    {
        if(level == m)
        {   
            for(int i = 0 ; i<queens.size();i++)
            {
                grid[i][queens[i]]='Q';
            }
            all_sols.push_back(grid);
            for(int i = 0 ; i<m;i++)
            {
                for(int j = 0 ; j<m ; j++)
                {
                    grid[i][j]='.';
                }
            }
            return ;
        }

        for(int i = 0 ; i<m ; i++)
        {
            if(check(level,i))
            {
                queens.push_back(i);
                rec(level+1,m);
                queens.pop_back();
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        string s1 ;
        for(int i = 0 ; i<n ; i++)
        {
            s1.push_back('.');
        }
        grid.resize(n,s1);  
        rec(0,n);

        return all_sols ;
    }
};