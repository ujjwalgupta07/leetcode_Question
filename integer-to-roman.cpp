// #####------------------------##### \\
// 
// Github Username : ujjwalgupta07
// Question Link : https://leetcode.com/problems/integer-to-roman/submissions/
// 
// #####------------------------##### \\

class Solution {
public:
    string intToRoman(int num)
    {
        string ans = "";
        int counter;

        // 1000
        counter = num/1000;
        num %= 1000;
        for(int i = 0; i < counter; i++)
            ans += "M";

        // 900
        counter = num/900;
        num %= 900;
        for(int i = 0; i < counter; i++)
            ans += "CM";

        // 500
        counter = num/500;
        num %= 500;
        for(int i = 0; i < counter; i++)
            ans += "D";

        // 400
        counter = num/400;
        num %= 400;
        for(int i = 0; i < counter; i++)
            ans += "CD";

        // 100
        counter = num/100;
        num %= 100;
        for(int i = 0; i < counter; i++)
            ans += "C";

        // 90
        counter = num/90;
        num %= 90;
        for(int i = 0; i < counter; i++)
            ans += "XC";

        // 50
        counter = num/50;
        num %= 50;
        for(int i = 0; i < counter; i++)
            ans += "L";

        // 40
        counter = num/40;
        num %= 40;
        for(int i = 0; i < counter; i++)
            ans += "XL";

        // 10
        counter = num/10;
        num %= 10;
        for(int i = 0; i < counter; i++)
            ans += "X";

        // 9
        counter = num/9;
        num %= 9;
        for(int i = 0; i < counter; i++)
            ans += "IX";

        // 5
        counter = num/5;
        num %= 5;
        for(int i = 0; i < counter; i++)
            ans += "V";

        // 4
        counter = num/4;
        num %= 4;
        for(int i = 0; i < counter; i++)
            ans += "IV";

        // 1
        counter = num/1;
        for(int i = 0; i < counter; i++)
            ans += "I";

        return ans;

    }
};
