//692. 前K个高频单词

//给一非空的单词列表，返回前 k 个出现次数最多的单词。
//
//返回的答案应该按单词出现频率由高到低排序。如果不同的单词有相同出现频率，按字母顺序排序。
//
//示例 1：
//
//输入 : ["i", "love", "leetcode", "i", "love", "coding"] , k = 2
//输出 : ["i", "love"]
//解析 : "i" 和 "love" 为出现次数最多的两个单词，均为2次。
//注意，按字母顺序 "i" 在 "love" 之前。
//
//
//示例 2：
//
//输入 : ["the", "day", "is", "sunny", "the", "the", "the", "sunny", "is", "is"] , k = 4
//输出 : ["the", "is", "sunny", "day"]
//解析 : "the", "is", "sunny" 和 "day" 是出现次数最多的四个单词，
//出现次数依次为 4, 3, 2 和 1 次。

class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string, int> coutMap;
        for (auto e : words)
        {
            coutMap[e]++;
        }
        //1.将pair<string,int>键值对放到vector中，用sort排序，还要一个按int比较的仿函数，排完了，还需要对次数相同的按字母排
        //因为sort是快排实现的，不稳定，排完了还需要对次数相同的按字母排
        //还是用multmap排

        //但是这么比的话出现次数小的在前面，出现次数多的在后面，如果我们用反向迭代器去取的话，那么就没法按字母顺序取了
        //因此要把map中比较大小的less换成greater
        multimap<int, string, greater<int>> sortMap;
        for (auto kv : coutMap)
        {
            sortMap.insert(make_pair(kv.second, kv.first));
        }
        vector<string> v;
        auto it = sortMap.begin();
        while (it != sortMap.end())
        {
            if (k == 0)
                break;

            v.push_back(it->second);
            ++it;
            --k;
        }
        return v;
    }
};