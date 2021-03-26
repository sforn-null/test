#include<stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int i = a;
	while (1)
	{
		if (i % a == 0 && i % b == 0)
		{
			printf("%d\n", i);
			break;
		}
		i++;
	}
	return 0;
}

//算法更好点
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int i = 1;
	while (i)
	{
		if (a * i % a == 0 && a * i % b == 0)
		{
			printf("%d\n", i * a);
			break;
		}
		i++;
	}
	return 0;
}