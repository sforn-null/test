#include<stdio.h>

//第一题是斐波那契数列，直接数就行

//第二题
int main()
{
	int x = 1;
	do
	{
		printf("%2d\n", x++);//%2d是将宽度设为2
		//输出结果是什么
		//死循环
	} while (x--);
}


//第三题
//执行后i和j的值是什么

int main()
{
	int i = 1;
	int j = i++;//后置++ 所以赋值给j的时候i是1，赋值完，i是2
	//2，1
	return 0;
}

//第四题 
//k的最终值

int main()
{
	int i = 10;
	int j = 20;
	int k = 3;
	k *= i + j;
	printf("%d", k);//加法的优先级比*=高，所以是90
	return 0;
}


//第五题
//打印出来的a的值是多少
#include<stdlib.h>

int a = 1;//全局变量
void test()
{
	int a = 2;//局部变量  局部优先
	a += 1; //a=3
}
int main()
{
	test();
	printf("%d\n", a);//但是这里不能用test的a
	//test的a只能在函数种使用
	//所以这里是1
	return 0;
}


//若有定义语句 
int year = 1009, * p = &year;
以下不能使变量year中的值增至1010的语句是
A.*p+=1;
B.(*p)++;
C.++(*p);
D.*p++;  //++优先级比*高


//11|10（11按位或10）（题目中为10进制） 的结果是什么
//按位或 有一个为真就为真
//1011
//1010
//1011 = 11