// #####------------------------##### \\
// 
// Github Username : ujjwalgupta07
// Question Link : https://leetcode.com/problems/check-if-word-is-valid-after-substitutions/
// 
// #####------------------------##### \\

class Solution {
public:
    bool isValid(string S) 
    {
        int pointer = -1;
        int size = S.length();
        char copyString[size];
        
        for(int i = 0; i < size; i++)
        {
            if(S[i] == 'c')
            {
                if(pointer < 1)
                    return false;
                else if(copyString[pointer] == 'b' && copyString[pointer - 1] == 'a')
                    pointer -= 2;
                else
                    return false;
            }
            
            else
                copyString[++pointer] = S[i];
        }
        if(pointer == -1)
            return true;
        else 
            return false;
    }
};
