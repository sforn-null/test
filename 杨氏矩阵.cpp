#include<stdio.h>
//���־��󣬴����ҵ��������ϵ��µ���
//��д�����������ľ����в���ĳһ�������Ƿ����
//Ҫ��ʱ�临�Ӷ�С��O(n)
//int find_num(int arr[3][3], int row, int col, int k)
//{
//	int x = 0;
//	int y = col - 1;
//	while (x<=row-1 && y>=0)
//	{
//		if (arr[x][y] == k)
//			return 1;
//		else if (arr[x][y] > k)
//			y--;
//		else if (arr[x][y] < k)
//			x++;
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int ret = find_num(arr, 3, 3, 7);
//	if (ret == 1)
//	{
//		printf("�ҵ���\n");
//	}
//	else
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}

//ֻ�ܷ����Ƿ��ҵ��ˣ����޷���������
//�����Ͳ���
//int find_num(int arr[3][3], int* px, int* py, int k)
//{
//	int x = 0;
//	int y = *py - 1;
//	while (x <= *px - 1 && y >= 0)
//	{
//		if (arr[x][y] == k)
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//		else if (arr[x][y] > k)
//			y--;
//		else if (arr[x][y] < k)
//			x++;
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int x = 3;
//	int y = 3;
//	int ret = find_num(arr, &x, &y, 7);
//	if (ret == 1)
//	{
//		printf("�ҵ���,�±���:%d %d\n",x,y);
//	}
//	else
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}