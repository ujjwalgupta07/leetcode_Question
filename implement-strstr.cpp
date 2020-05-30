// #####------------------------##### \\
// 
// Github Username : ujjwalgupta07
// Question Link : https://leetcode.com/problems/implement-strstr/submissions/
// 
// #####------------------------##### \\

class Solution {
public:
    int strStr(string haystack, string needle) 
    {
        int j, k;
        bool found;
        int checkSize = haystack.size();
        int findSize = needle.size();
        
        if(findSize == 0)
            return 0;
        
        for(int i = 0; i <= checkSize - findSize; i++)
        {
            if(haystack[i] == needle[0])
            {
                found = true;
                j = i;
                k = 0;
                for(; k < findSize; k++, j++)
                {
                    if(needle[k] != haystack[j])
                    {
                        found = false;
                        break;
                    }
                }
                if(found)
                    return i;
            }
        }
        return -1;
        
    }
};
