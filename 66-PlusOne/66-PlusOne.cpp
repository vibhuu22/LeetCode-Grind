// Last updated: 7/4/2025, 6:31:12 PM
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 0 ;
        for(int i = digits.size()-1 ; i> -1 ; i--)
        {   
            if(i==digits.size()-1)
            {
                digits[i]++;
            }
            else
            {
                   digits[i]+=carry;
            }
            int temp = digits[i];
            if(digits[i]<=9)
            {
                break;
            }
            else if (digits[i]==10 && i==0)
            {
                digits.insert(digits.begin(),1);
                digits[i+1]=0;
            }
            else
            {
                digits[i] = temp%10 ;  
                temp = temp/10 ;
                carry = temp ;
            }
        }
        return digits;
    }
};