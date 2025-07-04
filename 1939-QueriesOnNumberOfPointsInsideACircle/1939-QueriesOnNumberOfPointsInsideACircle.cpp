// Last updated: 7/4/2025, 6:30:10 PM
class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
     vector<int> ans ;
     for(auto i : queries)
     {
        int x1 = i[0];
        int x2 = i[1];
        int r = i[2]*i[2];
        // cout << x1 << " " << x2 << " " << r << '\n';
        int a11 = 0 ;
        for(auto i2 : points)
        {   
            int a = (i2[0]-x1)*(i2[0]-x1) ;
            int b = (i2[1]-x2)*(i2[1]-x2);
            // cout << a << " " << b << " \n";
            if(a+b <= r)
            {   
                // cout << "Inside\n";
                a11++;
            }
            // cout << "A = " << a << '\n';
        }
        ans.push_back(a11);
     }   

     return ans;  
    }
};