#include<stdio.h>
#include "SList.h"


void test()
{
	SListNode* head = NULL;
	head = SListPushBack(head, 1);
	head = SListPushBack(head, 2);
	head = SListPushBack(head, 3);
	head = SListPushBack(head, 4);
	SListPrint(head);
	head = SListPushFront(head, 0);
	SListPrint(head);
	//如果不想用head重新接收，可以传head的地址
	//不然的话函数里面接收的是形参，函数里面的改变不会影响外面
	head = SListPopBack(head);
	SListPrint(head);
	head = SListPopFront(head);
	SListPrint(head);
}
int main()
{
	test();
	return 0;
}