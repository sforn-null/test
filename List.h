#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

typedef int LTDataType;
typedef struct ListNode
{
	LTDataType data;
	struct ListNode* next;
	struct ListNode* prev;
}ListNode;


ListNode* BuyListNode(LTDataType x);

void ListInit(ListNode** ppHead);

void ListPrint(ListNode* pHead);

void ListPushBack(ListNode* pHead, LTDataType x);

void ListPopBack(ListNode* pHead);

void ListPushFront(ListNode* pHead, LTDataType x);

void ListPopFront(ListNode* pHead);

ListNode* ListFind(ListNode* pHead, LTDataType x);

void ListInsert(ListNode* pos, LTDataType x);
//在pos前面插入x

void ListErase(ListNode* pos);
//在pos位置删除