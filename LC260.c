//#include<stdio.h>
///**
// * Note: The returned array must be malloced, assume caller calls free().
// */
//
////给定一个整数数组 nums，其中恰好有两个元素只出现一次，其余所有元素均出现两次。 
////找出只出现一次的那两个元素。你可以按 任意顺序 返回答案。
////输入：nums = [1, 2, 1, 3, 2, 5]
////输出：[3, 5]
////解释：[5, 3] 也是有效的答案。
//
//
//int* singleNumber(int* nums, int numsSize, int* returnSize)
//{
//    //先将所有的数据都异或
//    int i = 0;
//    int ret = 0;
//    for (i = 0;i < numsSize;i++)
//    {
//        ret ^= nums[i];
//    }
//    //看异或的结果的哪一位是1
//    int m = 0;
//    while (((ret >> m) & 1) != 1)
//    {
//        m++;
//    }
//
//    //将m位是1的都异或到一起
//    //将m位是0的都异或到一起
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