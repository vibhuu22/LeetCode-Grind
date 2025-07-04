// Last updated: 7/4/2025, 6:31:16 PM
class Solution {
public:
    vector<int> queens ;
    int ans = 0 ;
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
           ans++;
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
    int totalNQueens(int n) {
        
        rec(0,n);

        return ans ;
    }
};