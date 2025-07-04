// Last updated: 7/4/2025, 6:30:56 PM
class Solution {
public:



    int addDigits(int num) {
        int sum = 0 ;
        while(num>0)
        {
            sum+= num%10; 
            num = num/10;

            if(num == 0 && sum>9)
            {
                num = sum ;
                sum = 0 ;
            }
            else
            {
                if(num == 0 && sum<10)
                {
                    break;
                }
            }
        }
        return sum ;
    }
};