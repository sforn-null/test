#include<stdio.h>
int getmax(int x,int y)
{
	if(x>y)
	return x;
	else
	return y;
}

int main()
{
	int a=10,b=20;
	int max = getmax(a,b);
	printf("max = %d\n",max);
	return 0;
}