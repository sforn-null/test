
//387. 字符串中的第一个唯一字符
//给定一个字符串，找到它的第一个不重复的字符，并返回它的索引。如果不存在，则返回 - 1。
//
//
//
//示例：
//
//s = "leetcode"
//返回 0
//
//s = "loveleetcode"
//返回 2
//
//
//提示：你可以假定该字符串只包含小写字母。

class Solution {
public:
    //计数排序
    int firstUniqChar(string s)
    {
        //使用映射的方式统计次数
        int count[26] = { 0 };//都是小写字母说明最多也就26个
        for (auto ch : s)
        {
            count[ch - 'a']++; //-'a'是因为都是小写字母，-a之后就是映射的位置
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (count[s[i] - 'a'] == 1)
                return i;
        }
        return -1;
    }
};