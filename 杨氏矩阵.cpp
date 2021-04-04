#include<stdio.h>
//数字矩阵，从左到右递增，从上到下递增
//编写程序，在这样的矩阵中查找某一个数字是否存在
//要求时间复杂度小于O(n)
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
//		printf("找到了\n");
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}

//只能返回是否找到了，但无法返回坐标
//返回型参数
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
//		printf("找到了,下标是:%d %d\n",x,y);
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}