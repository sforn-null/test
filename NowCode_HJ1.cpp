//题目描述
//计算字符串最后一个单词的长度，单词以空格隔开，字符串长度小于5000。
//
//输入描述 :
//输入一行，代表要计算的字符串，非空，长度小于5000。
//
//输出描述 :
//输出一个整数，表示输入字符串最后一个单词的长度。
//
//示例1
//输入
//复制
//hello nowcoder
//输出
//复制
//8
//说明
//最后一个单词为nowcoder，长度为8

#include<iostream>
using namespace std;

int main()
{
    string s;
    //cin>>s;
    //不能用cin,cin遇到空格或换行都结束
    getline(cin, s);//换行才结束

    size_t pos = s.rfind(' ');
    cout << s.size() - (pos + 1) << endl;

    return 0;
}