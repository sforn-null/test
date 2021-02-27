#include<stdio.h>
//下面的程序,交换需要用地址远程操作,不然只会交换x与y,不会改变a和b的值,利用指针*pa之类的 

void Swap(int* pa,int* pb) 
{
	int tmp ;
	tmp=*pa;
	*pa=*pb;
	*pb=tmp;
}
int main()
{
	int a=10;
	int b=20;
	Swap(&a,&b); //自定义的交换函数 
	printf("a=%d\nb=%d\n",a,b);
	return 0;
}