// Last updated: 7/4/2025, 6:30:26 PM
class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int water_rem = capacity ;
        int move = 0 ;
        for(int i = 0 ; i<plants.size() ; i++)
        {   
            move++;
            water_rem-=plants[i];
            if((i+1)<plants.size() && water_rem < plants[i+1] )
            {
                move+= 2*(i+1);
                water_rem = capacity ;
            }
        }
        return move;
    }
};