//给定两个字符串形式的非负整数 num1 和num2 ，计算它们的和。
//
//
//
//提示：
//
//num1 和num2 的长度都小于 5100
//num1 和num2 都只包含数字 0 - 9
//num1 和num2 都不包含任何前导零
//你不能使用任何內建 BigInteger 库， 也不能直接将输入的字符串转换为整数形式

class Solution {
public:
    string addStrings(string num1, string num2)
    {
        int end1 = num1.size() - 1, end2 = num2.size() - 1;
        int next = 0;
        string retstr;
        while (end1 >= 0 || end2 >= 0)
        {
            int val1 = 0;
            int val2 = 0;
            if (end1 >= 0)
            {
                val1 = num1[end1] - '0';
            }
            if (end2 >= 0)
            {
                val2 = num2[end2] - '0';
            }
            int ret = val1 + val2 + next;
            if (ret > 9)
            {
                ret -= 10;
                next = 1;
            }
            else
            {
                next = 0;
            }
            retstr += (ret + '0');//这里是尾插，得出来的就是相反的
            //retstr.insert(retstr.begin(),ret+'0');
            --end1;
            --end2;
        }
        if (next == 1)
        {
            //retstr.insert(retstr.begin(),'1');
            retstr += '1';
        }
        reverse(retstr.begin(), retstr.end());
        return retstr;
    }
};

