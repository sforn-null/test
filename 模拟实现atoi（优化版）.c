#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<limits.h> //�������ֵ��Сֵ��Ҫ��ͷ�ļ�
//��ָoffer����

//����д������кܶ�����
//int my_atoi(const char* str)
//{
//	int ret = 0;
//	while (*str)
//	{
//		ret = ret * 10 + *str - '0';
//		//�ַ������ּ�ȥ�ַ�'0'���ó��ľ�������
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

//���Ϊ��ָ����ô��
//int my_atoi(const char* str)
//{
//	if (str == NULL)
//	{
//		return 0;//����������������ľ��ǡ�0������ô�ֲ����
//	}
//	int ret = 0;
//	while (*str)
//	{
//		ret = ret * 10 + *str - '0';
//		//�ַ������ּ�ȥ�ַ�'0'���ó��ľ�������
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
	//��ָ��Ĵ���
	if (str == NULL)
	{
		return 0;
	}
	//�հ��ַ��Ĵ���
	while (isspace(*str))
	{
		str++;
	}
	//����+ -��
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
		//�ж��ǲ��������ַ�
		if (isdigit(*str) == '0')
		{
			break;
		}
		else
		{
			ret = ret * 10 + flag*(*str - '0');
			//����һ��flag������������Ͷ�����
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

	long long ret = my_atoi(p);//��Ϊretÿ��Ҫ��10
	//int���ͺ��п��ܻ᲻���������long long����
	if (state == VALID)
	{
		printf("%d\n", ret);
	}
	return 0;
}