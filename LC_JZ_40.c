//#include<stdio.h>
//
////输入整数数组 arr ，找出其中最小的 k 个数。
//// 例如，输入4、5、1、6、2、7、3、8这8个数字，
//// 则最小的4个数字是1、2、3、4。
////
////
////
////示例 1：
////
////输入：arr = [3, 2, 1], k = 2
////输出：[1, 2] 或者[2, 1]
////示例 2：
////
////输入：arr = [0, 1, 2, 1], k = 1
////输出：[0]
////
////
////限制：
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