#include<stdio.h>
//���µ��Ǵ���ģ� Ӧ�øı��ַ 
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
	Swap(a,b); //�Զ���Ľ������� 
	printf("a=%d\nb=%d\n",a,b);
	return 0;
}