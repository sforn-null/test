#include<stdio.h>
#include<stdlib.h>
#include<string.h> 
//���ֲ��� 
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
	int ret = binary_search(arr,k,sz); //�Զ�����ֲ��ҵĺ��� 
	if(ret==-1)
	{
		printf("�Ҳ���ָ��������\n");
	}
	else
	{
		printf("�ҵ�ָ�����֣��±���:%d\n",ret);
	}
	return 0;
 } 

//ÿ����һ�κ��� num��һ 
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
