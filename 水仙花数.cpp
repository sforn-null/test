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
		//�ж�i�ǲ���������:
		//���ҳ�i��λ��
		while (i / 10)
		{
			count++;
			i = i / 10;
		}
		i = j;
		//�õ�ÿһλ�����Ƕ���
		while (j)
		{
			sum+=pow(j % 10,count);
			j=j / 10;
		}
		//�ж�i�Ƿ���������
		if (i == sum)
		{
			printf("%d ", i);
		}
		
	}
	return 0;
}