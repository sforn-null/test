//#include<stdio.h>
///**
// * Note: The returned array must be malloced, assume caller calls free().
// */
//
////����һ���������� nums������ǡ��������Ԫ��ֻ����һ�Σ���������Ԫ�ؾ��������Ρ� 
////�ҳ�ֻ����һ�ε�������Ԫ�ء�����԰� ����˳�� ���ش𰸡�
////���룺nums = [1, 2, 1, 3, 2, 5]
////�����[3, 5]
////���ͣ�[5, 3] Ҳ����Ч�Ĵ𰸡�
//
//
//int* singleNumber(int* nums, int numsSize, int* returnSize)
//{
//    //�Ƚ����е����ݶ����
//    int i = 0;
//    int ret = 0;
//    for (i = 0;i < numsSize;i++)
//    {
//        ret ^= nums[i];
//    }
//    //�����Ľ������һλ��1
//    int m = 0;
//    while (((ret >> m) & 1) != 1)
//    {
//        m++;
//    }
//
//    //��mλ��1�Ķ����һ��
//    //��mλ��0�Ķ����һ��
//    int x1 = 0;
//    int x2 = 0;
//    for (i = 0;i < numsSize;i++)
//    {
//        if ((nums[i] >> m) & 1)
//        {
//            x1 ^= nums[i];
//        }
//        else
//        {
//            x2 ^= nums[i];
//        }
//
//    }
//    int* RetArr = (int*)malloc(sizeof(int) * 2);
//    RetArr[0] = x1;
//    RetArr[1] = x2;
//    *returnSize = 2;
//    return RetArr;
//}