// #####------------------------##### \\
// 
// Github Username : ujjwalgupta07
// Question Link : https://leetcode.com/problems/summary-ranges/
// 
// #####------------------------##### \\

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums)
    {
        vector<string> ans;
        int startIndex = 0;
        int i = 0;
        if(nums.size() == 0)
            return ans;

        while(i < nums.size() - 1)
        {
            if(nums.at(i) + 1 != nums.at(i+1))
            {
                if(startIndex != i)
                    ans.push_back(to_string(nums.at(startIndex)) + "->" + to_string(nums.at(i)));
                else
                    ans.push_back(to_string(nums.at(i)));
                startIndex = i+1;
            }
            i++;
        }

        if(startIndex != i)
            ans.push_back(to_string(nums.at(startIndex)) + "->" + to_string(nums.at(i)));
        else
            ans.push_back(to_string(nums.at(i)));
        return ans;
    }
};
