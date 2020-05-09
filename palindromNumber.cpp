// #####------------------------##### \\
// 
// Github Username : ujjwalgupta07
// Question Link : https://leetcode.com/problems/palindrome-number/
// 
// #####------------------------##### \\

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
            return false;
        long copyX = x, reverseX = 0;
        while(x > 0)
        {
            reverseX *= 10;
            reverseX += x%10;
            x /= 10;
        }
        if(reverseX == copyX)
            return true;
        else 
            return false;
    }
};
