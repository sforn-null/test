#include "List.h"


ListNode* BuyListNode(LTDataType x)
{
	ListNode* newnode = (ListNode*)malloc(sizeof(ListNode));
	newnode->data = x;
	newnode->next = NULL;
	newnode->prev = NULL;
	return newnode;
}

void ListInit(ListNode** ppHead)
{
	*ppHead = BuyListNode(0);
	(*ppHead)->next = *ppHead;
	(*ppHead)->prev = *ppHead;
}

void ListPrint(ListNode* pHead)
{
	assert(pHead);
	ListNode* cur = pHead->next;
	while (cur != pHead)
	{
		printf("%d", cur->data);
		cur = cur->next;
	}
	printf("\n");
}

void ListPushBack(ListNode* pHead, LTDataType x)
{
	assert(pHead);
	ListNode* tail = pHead->prev;
	ListNode* newnode = BuyListNode(x);
	tail->next = newnode;
	newnode->prev = tail;
	pHead->prev = newnode;
	newnode->next = pHead;
}

void ListPopBack(ListNode* pHead)
{
	assert(pHead);
	assert(pHead->next != pHead);
		ListNode* tail = pHead->prev->prev;
		ListNode* prev = pHead->prev;
		pHead->prev = tail;
		tail->next = pHead;
		free(prev);
		tail = NULL;
}

void ListPushFront(ListNode* pHead, LTDataType x)
{
	assert(pHead);

	ListNode* first = pHead->next;
	ListNode* newnode = BuyListNode(x);
	pHead->next = newnode;
	newnode->prev = pHead;
	newnode->next = first;
	first->prev = newnode;
}

void ListPopFront(ListNode* pHead)
{
	assert(pHead);
	assert(pHead->next != pHead);
	ListNode* first = pHead->next;
	ListNode* second = first->next;
	pHead->next = second;
	second->prev = pHead;
	free(first);
	first = NULL;
}

ListNode* ListFind(ListNode* pHead, LTDataType x)
{
	assert(pHead);
	ListNode* cur = pHead->next;
	while (cur != pHead)
	{
		if (cur->data == x)
			return cur;
		cur = cur->next;
	}
	return NULL;
}

void ListInsert(ListNode* pos, LTDataType x)
{
	assert(pos);
	ListNode* posPrev = pos->prev;
	ListNode* newnode = BuyListNode(x);
	posPrev->next = newnode;
	pos->prev = newnode;
	newnode->prev = newnode;
	newnode->next = pos;
}

void ListErase(ListNode* pos)
{
	assert(pos);
	ListNode* posPrev = pos->prev;
	ListNode* posNext = pos->next;
	free(pos);
	posPrev->next = posNext;
	posNext->prev = posPrev;
}


