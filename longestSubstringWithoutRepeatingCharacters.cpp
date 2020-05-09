// #####------------------------##### \\
// 
// Github Username : ujjwalgupta07
// Question Link : https://leetcode.com/problems/longest-substring-without-repeating-characters/
// 
// #####------------------------##### \\

// ######## First Solution ######## \\
 
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLength = 0, firstIndex = 0;
        unordered_set<char> stringSet;
        for(int i = 0; i < s.length(); i++)
        {
            if(stringSet.find(s[i]) == stringSet.end())
                stringSet.insert(s[i]);
            else
            {
                maxLength = (maxLength > stringSet.size() ? maxLength : stringSet.size());
                for(int j = firstIndex; j < i; j++)
                {
                    if(s[j] == s[i])
                    {
                        firstIndex = j+1;
                        break;
                    }
                    stringSet.erase(s[j]);
                }
            }
        }

        return (maxLength > stringSet.size() ? maxLength : stringSet.size());
    }
};

// ######## Second Solution ######## \\

/*

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLength = 0, firstIndex = 0, secondIndex = 0;
        for(int i = 0; i < s.length(); i++)
        {
            for(int j = firstIndex; j < secondIndex; j++)
            {
                if(s[j] == s[i])
                {
                    maxLength = (maxLength > (secondIndex - firstIndex) ? maxLength : (secondIndex - firstIndex));
                    firstIndex = j + 1;
                }
            }
            secondIndex++;
        }

        return (maxLength > (secondIndex - firstIndex) ? maxLength : (secondIndex - firstIndex));;
    }
};

*\


// ######## Third Solution ######## \\

/*

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int firstIndex = 0, secondIndex = 0, ans = 0;
        int index[128] = { -1 };
        int a;
        char b;

        for(int secondIndex = 0; secondIndex < s.size(); secondIndex++)
        {
            b = s[secondIndex];
            a = index[b];

            if(firstIndex < a)
                firstIndex = a;
            index[b] = secondIndex + 1;
            if(ans < secondIndex - firstIndex + 1)
                ans = secondIndex - firstIndex + 1;
        }
        return ans;
    }
};

 */
