#include<stdio.h>
//int removeDuplicates(int* nums, int numsSize) {
//    int* str = nums;
//    int* dst = nums;
//    int i = 0;
//    int count = 0;
//    for (i = 0;i <= numsSize-1;i++)
//    {
//        if (*(str + i) != *(str + i + 1))
//        {
//            *dst = *(str + i);
//            dst++;
//            *dst = *(str + i + 1);
//            count++;
//        }
//        else
//        {
//                *dst = *(str + i);
//        dst++;
//        i++;
//        count++;
//    }
//    }
//    nums = dst;
//    return count;
//}
int removeDuplicates(int* nums, int numsSize) {
    int* str = nums;
    int* dst = nums;
    int i = 0;
    int count = 1;
    if (numsSize < 2) {
        return numsSize;
    }
    for (i = 1;i < numsSize;i++)
    {
        if (*(str + i - 1) != *(str + i))
        {
            dst++;
            *(dst) = *(str + i);
            count++;
        }
    }
    nums = dst;
    return count;
}

int main()
{
    int arr[] = { 1,1,2 };
    int numSize = sizeof(arr) / sizeof(arr[0]);
    //printf("%d", numSize);
    int len = removeDuplicates(arr, numSize);
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}