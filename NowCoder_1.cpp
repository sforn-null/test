
//根据输入的日期，计算是这一年的第几天。
//
//
//
//输入描述:
//输入一行，每行空格分割，分别是年，月，日
//
//
//
//输出描述:
//输出是这一年的第几天
//示例1
//输入
//2012 12 31
//输出
//366
//示例2
//输入
//1982 3 4
//输出
//63


#include<iostream>
using namespace std;

int main()
{
    static int MonthDays[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
    int year, month, day;

    //可以接收多个测试案例直到按ctrl+c
    while (cin >> year >> month >> day)
    {
        int n = 0;
        //累加当前月之前的月的天数
        for (int i = 1;i < month;++i)
        {
            n += MonthDays[i];
        }
        //将本月的天数累加上
        n += day;

        //如果今年为闰年，并且月数还大于2，那么天数就得加一
        if (month > 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)))
        {
            n += 1;
        }
        cout << n << endl;
    }

    return 0;
}