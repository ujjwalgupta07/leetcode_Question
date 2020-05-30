// #####------------------------##### \\
// 
// Github Username : ujjwalgupta07
// Question Link : https://leetcode.com/problems/nth-digit/submissions/
// 
// #####------------------------##### \\

class Solution {
public:
    int findNthDigit(int n) 
    {
        if(n < 10)
            return n;
        
        int i = 9, j = 1, subtractionFactor;
        
        while(j < 9)
        {
            subtractionFactor = i * j;
            if(subtractionFactor <= n)
                n -= subtractionFactor;
            else
                break;
            i *= 10;
            j++;
        }
        
        int startPoint, slide, skip;
        startPoint = pow(10, j-1) - 1;
        skip = n/j;
        slide = n % j;
        startPoint += skip;
        
        if(slide == 0)
            return startPoint%10;
        
        startPoint++;
        
        for(int k = 0; k < j - slide; k++)
            startPoint /= 10;
        return startPoint%10;
    }
};
