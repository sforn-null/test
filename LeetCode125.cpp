//给定一个字符串，验证它是否是回文串，只考虑字母和数字字符，可以忽略字母的大小写。
//
//说明：本题中，我们将空字符串定义为有效的回文串。
//
//示例 1:
//
//输入: "A man, a plan, a canal: Panama"
//输出 : true
//示例 2 :
//
//	输入 : "race a car"
//	输出 : false

class Solution {
public:
    bool isCharOrNumber(char ch)
    {
        if (ch >= 'a' && ch <= 'z' || ch >= '0' && ch <= '9')
            return true;
        else
            return false;
    }
    bool isPalindrome(string s)
    {
        //将字符串中所有的大写字母转成小写
        for (auto& ch : s)//这里一定要加引用，因为要改变s数组里面的东西
        {               //不加引用之后改变ch
            if (ch >= 'A' && ch <= 'Z')
            {
                ch += 32;
            }
        }
        int begin = 0, end = s.size() - 1;
        while (begin < end)
        {
            while (begin < end && !isCharOrNumber(s[begin]))
            {
                ++begin;
            }
            while (begin < end && !isCharOrNumber(s[end]))
            {
                --end;
            }
            if (s[begin] != s[end])
            {
                return false;
            }
            else
            {
                ++begin;
                --end;
            }
        }
        return true;
    }
};
