#include<stdio.h>
#include<math.h>
int main()
{
	int i;
	int j;
	
	for (i = 0;i < 100000;i++)
	{
		j = i;
		int sum = 0;
		int count = 1;
		//判断i是不是自幂数:
		//先找出i的位数
		while (i / 10)
		{
			count++;
			i = i / 10;
		}
		i = j;
		//得到每一位的数是多少
		while (j)
		{
			sum+=pow(j % 10,count);
			j=j / 10;
		}
		//判断i是否是自幂数
		if (i == sum)
		{
			printf("%d ", i);
		}
		
	}
	return 0;
}