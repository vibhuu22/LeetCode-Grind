// Last updated: 7/4/2025, 6:30:42 PM
class Solution {
public:

int checkPalindrome (string s , int i ,int j)
{
    while(i<=j)
    {
        if(s[i] != s[j])
        {
            return false;
        }
        else
        {
            i++;
            j--;
        }
    }
    return true;
}

    bool validPalindrome(string str) {
        int i=0 ;

        int j = str.length()-1 ;

        while(i<=j)
        {
            if(str[i] != str[j])
            {
                // ek baar i ko remove , ek baar j ko remove

                return checkPalindrome(str,i+1,j) || (checkPalindrome(str,i,j-1)) ;
            }
            else
            {
                // str[i] == str[j]
                i++;
                j--;
            }
        }
        // 0 removal
        return true ;
        
    }
};