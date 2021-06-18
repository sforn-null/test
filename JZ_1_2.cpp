//JZ2 替换空格
//
//描述
//请实现一个函数，将一个字符串中的每个空格替换成“ % 20”。例如，当字符串为We Are Happy.则经过替换之后的字符串为We % 20Are % 20Happy。
//示例1
//输入：
//"We Are Happy"
//复制
//返回值：
//"We%20Are%20Happy

class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     *
     * @param s string字符串
     * @return string字符串
     */
    string replaceSpace(string s) {
        // write code here
        string NEW;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != ' ')
            {
                NEW += s[i];
            }
            if (s[i] == ' ')
            {
                NEW += "%20";
            }
        }
        return NEW;
    }
};