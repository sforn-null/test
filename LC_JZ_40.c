//#include<stdio.h>
//
////������������ arr ���ҳ�������С�� k ������
//// ���磬����4��5��1��6��2��7��3��8��8�����֣�
//// ����С��4��������1��2��3��4��
////
////
////
////ʾ�� 1��
////
////���룺arr = [3, 2, 1], k = 2
////�����[1, 2] ����[2, 1]
////ʾ�� 2��
////
////���룺arr = [0, 1, 2, 1], k = 1
////�����[0]
////
////
////���ƣ�
////
////0 <= k <= arr.length <= 10000
////0 <= arr[i] <= 10000
////
//
//
///**
// * Note: The returned array must be malloced, assume caller calls free().
// */
//
//void AdjustDown(int* a, int n, int root)
//{
//    int parent = root;
//    int child = parent * 2 + 1;
//    while (child < n)
//    {
//        if (child + 1 < n && a[child] < a[child + 1])
//        {
//            child++;
//        }
//        if (a[child] > a[parent])
//        {
//            int tmp = a[child];
//            a[child] = a[parent];
//            a[parent] = tmp;
//            parent = child;
//            child = parent * 2 + 1;
//        }
//        else
//        {
//            break;
//        }
//    }
//}
//int* getLeastNumbers(int* arr, int arrSize, int k, int* returnSize)
//{
//    *returnSize = k;
//    if (k == 0)
//        return NULL;
//    int* retArr = (int*)malloc(sizeof(int) * k);
//    for (int i = 0;i < k;i++)
//    {
//        retArr[i] = arr[i];
//    }
//    for (int i = (k - 1 - 1) / 2;i >= 0;i--)
//    {
//        AdjustDown(retArr, k, i);
//    }
//    for (int j = k;j < arrSize;j++)
//    {
//        if (retArr[0] > arr[j])
//        {
//            retArr[0] = arr[j];
//            AdjustDown(retArr, k, 0);
//        }
//    }
//    return retArr;
//}