#include<stdio.h>
//����ĳ���,������Ҫ�õ�ַԶ�̲���,��Ȼֻ�ύ��x��y,����ı�a��b��ֵ,����ָ��*pa֮��� 

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
	Swap(&a,&b); //�Զ���Ľ������� 
	printf("a=%d\nb=%d\n",a,b);
	return 0;
}