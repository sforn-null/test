#include<stdio.h>

void reverse(int* nums, int begin, int end)
{
	while (begin < end)
	{
		int tmp = nums[begin];
		nums[begin] = nums[end];
		nums[end] = tmp;
		begin++;
		end--;
	}
}
void rotate(int* nums, int numsSize, int k)
{
	while (k > numsSize)
	{
		k = k - numsSize;
	}
	reverse(nums, 0, numsSize - 1);
	reverse(nums, 0, k - 1);
	reverse(nums, k, numsSize-1);
}

