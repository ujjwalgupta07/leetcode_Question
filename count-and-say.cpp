// #####------------------------##### \\
// 
// Github Username : ujjwalgupta07
// Question Link : https://leetcode.com/problems/count-and-say/submissions/
// 
// #####------------------------##### \\

class Solution {
public:
    string countAndSay(int n) 
    {
        int counter = 1, size;
        string prevString = "1", newString = "";
        
        for(int i = 1; i < n; i++)
        {
            size = prevString.size();
            int j;
            for(j = 0; j < size - 1; j++)
            {
                if(prevString[j] == prevString[j+1])
                    counter++;
                else
                {
                    newString = newString + to_string(counter) + prevString[j];
                    counter = 1;
                }
            }
            
            newString = newString + to_string(counter) + prevString[j];
            counter = 1;
            prevString = newString;
            newString = "";
        }
        return prevString;
    }
};
