// #####------------------------##### \\
// 
// Github Username : ujjwalgupta07
// Question Link : https://leetcode.com/problems/search-insert-position
// 
// #####------------------------##### \\

class Solution {
public:
    int searchInsert(vector<int>& nums, int target)
    {
        int size = nums.size();
        if(size == 0)
            return 0;

        int low = 0, middle, high = size - 1, midValue;

        while(low <= high)
        {
            middle = (low + high)/2;
            midValue = nums.at(middle);
            if(midValue == target)
                return middle;

            if(midValue > target)
                high = middle - 1;
            else
                low = middle + 1;
        }

        return low;
    }
};


