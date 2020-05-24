// #####------------------------##### \\
// 
// Github Username : ujjwalgupta07
// Question Link : https://leetcode.com/problems/valid-parentheses/
// 
// #####------------------------##### \\

class Solution {
public:
    bool isValid(string s) 
    {
        int pointer = -1;
        char copyString[s.length()];
        
        for(int i = 0; i < s.length(); i++)
        {
            if(pointer == -1)
            {
                copyString[++pointer] = s[i];
                continue;
            }
            
            if(s[i] == ')')
            {
                if(copyString[pointer] == '(')
                    pointer--;
                
                else
                    copyString[++pointer] = s[i];
            }
            
            else if(s[i] == '}')
            {
                if(copyString[pointer] == '{')
                    pointer--;
                
                else
                    copyString[++pointer] = s[i];
            }
            
            else if(s[i] == ']')
            {
                if(copyString[pointer] == '[')
                    pointer--;
                
                else
                    copyString[++pointer] = s[i];
            }
            
            else
                copyString[++pointer] = s[i];
        }
        
        if(pointer == -1)
            return true;
        else
            return false;
    }
};
