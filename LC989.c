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

int* addToArrayForm(int* num, int numSize, int k, int* returnSize) 
{
	int* addRet = (int*)malloc(10001 * sizeof(int));
	int end1 = numSize - 1;
	int next = 0;//进位值
	int i = 0;
	while (end1 >= 0 || k > 0)
	{
		int cur = 0;
		if (end1 >= 0)
		{
			cur = num[end1];
			end1--;
		}
		int ki = 0;
		if (k > 0)
		{
			ki = k % 10;
			k = k / 10;
		}
		if (cur + ki + next >= 10)
		{
			cur = (cur + ki + next) % 10;
			next = 1;
		}
		else
		{
			cur = cur + ki + next;
			next = 0;
		}
		addRet[i++] = cur;
	}
	if (next == 1)
	{
		addRet[i++] = 1;
		//可能最后那个也需要进位
	}
	reverse(addRet, 0, i);
	*returnSize = i;
	return addRet;
}