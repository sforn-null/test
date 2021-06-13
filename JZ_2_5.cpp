//剑指 Offer 05. 替换空格
//请实现一个函数，把字符串 s 中的每个空格替换成"%20"。
//
//
//
//示例 1：
//
//输入：s = "We are happy."
//输出："We%20are%20happy."
//
//
//限制：
//
//0 <= s 的长度 <= 10000
//

class Solution {
public:
    string replaceSpace(string s) {
        //先统计' '的个数
        int count = 0;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == ' ') {
                count++;
            }
        }
        //转化之后的字符串长度 = 空格数*2+原字符串长度
        int len = s.size();
        s.resize(len + 2 * count);
        int newlen = s.size();
        int i = len - 1, j = newlen - 1;
        while (i >= 0 && j > i) {
            if (s[i] == ' ') {
                s[j--] = '0';
                s[j--] = '2';
                s[j--] = '%';
            }
            else {
                s[j--] = s[i];
            }
            --i;
        }
        return s;
    }
};