//#include<stdio.h>
//
////给你一个数组 nums 和一个值 val，
//// 你需要 原地 移除所有数值等于 val 的元素，
//// 并返回移除后数组的新长度。
////
////不要使用额外的数组空间，
//// 你必须仅使用 O(1) 额外空间并 原地 修改输入数组。
////
////元素的顺序可以改变。
//// 你不需要考虑数组中超出新长度后面的元素。
////
//
////时间复杂度O（n），所以不能直接遍历然后删除
//
//int removeElement(int* nums, int numsSize, int val)
//{
//	int* str = nums;
//	int* dst = nums;
//	int i = 0;
//	int count = 0;
//	for (i = 0;i < numsSize;i++)
//	{
//		if (*(str + i) != val)
//		{
//			*dst = *(str + i);
//			dst++;
//			count++;
//		}
//	}
//	nums = dst;
//	return count;
//}
//
//int main()
//{
//	int arr[] = { 20,10,1,20,6,12,21,20 };
//	int numSize = sizeof(arr) / sizeof(arr[0]);
//	//printf("%d", numSize);
//	int len = removeElement(arr, numSize, 20);
//	for (int i = 0; i < len; i++) {
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}