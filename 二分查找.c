#include<stdio.h>
#include<stdlib.h>
#include<string.h> 
//二分查找 
int binary_search(int arr[],int k,int sz)
{
	
	int left = 0;
	int right = sz-1;
	while(left<=right)
	{
		
	int mid =(left+right)/2;
	if(arr[mid]<k)
	{
		left=mid+1;
	}
	else if(arr[mid]>k)
	{
		right=mid-1;
	}
	else
	{
		return mid;
	}
	}
	return -1;
}
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int k=7;
	int sz=sizeof(arr)/sizeof(arr[0]);
	int ret = binary_search(arr,k,sz); //自定义二分查找的函数 
	if(ret==-1)
	{
		printf("找不到指定的数字\n");
	}
	else
	{
		printf("找到指定数字，下标是:%d\n",ret);
	}
	return 0;
 } 

//每调用一次函数 num加一 
//int add(int*p)
//{
//	(*p)++;
//	return *p;
//}
//int main()
//{
//	int num=0;
//	add(&num);
//	printf("%d\n",num);
//    add(&num);
//	printf("%d\n",num);
//	add(&num);
//	printf("%d\n",num);
//	return 0;
//}
