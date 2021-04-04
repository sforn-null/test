#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<limits.h> //整型最大值最小值需要的头文件
//剑指offer例题

//这样写代码会有很多问题
//int my_atoi(const char* str)
//{
//	int ret = 0;
//	while (*str)
//	{
//		ret = ret * 10 + *str - '0';
//		//字符的数字减去字符'0'，得出的就是数字
//		str++;
//	}
//	return ret;
//}
//int main()
//{
//	const char* p = "12345";
//	//'1'
//	//1*10+2  12
//	//(1*10+2)*10+3
//	//123
//	int ret = my_atoi(p);
//	printf("%d\n", ret);
//	return 0;
//}

//如果为空指针怎么办
//int my_atoi(const char* str)
//{
//	if (str == NULL)
//	{
//		return 0;//但如果本来传进来的就是‘0’，那么分不清楚
//	}
//	int ret = 0;
//	while (*str)
//	{
//		ret = ret * 10 + *str - '0';
//		//字符的数字减去字符'0'，得出的就是数字
//		str++;
//	}
//	return ret;
//}
//int main()
//{
//	const char* p = "12345";
//	//'1'
//	//1*10+2  12
//	//(1*10+2)*10+3
//	//123
//	int ret = my_atoi(p);
//	printf("%d\n", ret);
//	return 0;
//}

enum State
{
	VALID,
	INVALID
}state;
int my_atoi(const char* str)
{
	int flag = 1;
	state = INVALID;
	//空指针的处理
	if (str == NULL)
	{
		return 0;
	}
	//空白字符的处理
	while (isspace(*str))
	{
		str++;
	}
	//处理+ -号
	if (*str == '+')
	{
		flag = 1;
		str++;
	}
	else if (*str == '-')
	{
		flag = -1;
		str++;
	}
	long long ret = 0;
	while (*str)
	{
		//判断是不是数字字符
		if (isdigit(*str) == '0')
		{
			break;
		}
		else
		{
			ret = ret * 10 + flag*(*str - '0');
			//乘上一个flag，正负的情况就都有了
			if (ret > INT_MAX || ret < INT_MIN)
			{
				ret = 0;
				return (int)ret;
			}
			str++;
		}
		
	}
	if (*str == '\0')
	{
		state = VALID;
		return ret;
	}
	return ret;
}
int main()
{
	const char* p = "123";

	long long ret = my_atoi(p);//因为ret每次要乘10
	//int类型很有可能会不够，因此用long long类型
	if (state == VALID)
	{
		printf("%d\n", ret);
	}
	return 0;
}