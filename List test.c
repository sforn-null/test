#include"List.h"

void TestList1()
{
	ListNode* pHead = NULL;
	ListInit(&pHead);
	ListPushBack(pHead, 1);
	ListPushBack(pHead, 2);
	ListPushBack(pHead, 3);
	ListPushBack(pHead, 4);
	ListPrint(pHead);
	ListPopBack(pHead);
	ListPopBack(pHead);
	ListPopBack(pHead);
	ListPrint(pHead);

	ListPushFront(pHead, 1);
	ListPushFront(pHead, 2);
	ListPushFront(pHead, 3);
	ListPushFront(pHead, 4);
	ListPushFront(pHead, 5);
	ListPrint(pHead);

	ListPopFront(pHead);
	ListPopFront(pHead);
	ListPopFront(pHead);
	ListPopFront(pHead);
	ListPopFront(pHead);
	ListPopFront(pHead);
	ListPrint(pHead);
}

void TestList2()
{
	ListNode* pHead = NULL;
	ListInit(&pHead);
	ListPushBack(pHead, 1);
	ListPushBack(pHead, 2);
	ListPushBack(pHead, 3);
	ListPushBack(pHead, 4);
	ListPrint(pHead);

	ListNode* pos = ListFind(pHead, 3);
	printf("%d\n", pos->data);
	ListInsert(pos, 30);
	ListPrint(pHead);
}
int main()
{
	//TestList1();
	TestList2();
	return 0;
}