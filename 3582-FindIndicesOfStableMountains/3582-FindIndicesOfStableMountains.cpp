// Last updated: 7/4/2025, 6:29:44 PM
class Solution {
public:
    vector<int> stableMountains(vector<int>& height, int threshold) {
        vector<int> ans ;

        for(int i = 1 ; i<height.size() ; i++)
        {
            if(height[i-1]>threshold)
            {
                ans.push_back(i);
            }
        }
        return ans ;
    }
};