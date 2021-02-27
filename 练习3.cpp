#include<stdio.h>
//底下的是错误的， 应该改变地址 
void Swap(int x,int y) 
{
	int tmp ;
	tmp=x;
	x=y;
	y=tmp;
}
int main()
{
	int a=10;
	int b=20;
	Swap(a,b); //自定义的交换函数 
	printf("a=%d\nb=%d\n",a,b);
	return 0;
}