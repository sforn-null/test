#include<stdio.h>
#include "SList.h"
//单链表

SListNode* BuyNode(SLTDataType x)
{
	SListNode* newnode = (SListNode*)malloc(sizeof(SListNode));
	if (newnode != NULL)
	{
		newnode->_data = x;
		newnode->_next = NULL;
		return newnode;
	}
	else
	{
		perror("malloc");
	}
}
SListNode* SListPushBack(SListNode* head, SLTDataType x)
{
	SListNode* newnode = BuyNode(x);
		if (head == NULL)
		{
			head = newnode;
			return head;
		}
		else
		{
			SListNode* tail = head;
			while (tail->_next != NULL)
			{
				tail = tail->_next;
			}
			tail->_next = newnode;
			return head;
		}
}

SListNode* SListPopBack(SListNode* head)
{
	if (head == NULL)
	{
		printf("链表为空，无节点可删除");
		return;
	}
	else
	{
		SListNode* tail = head;
		while ((tail->_next)->_next != NULL)
		{
			tail = tail->_next;
		}
		tail->_next = NULL;
		free(tail->_next);
		return head;
	}
}

SListNode* SListPushFront(SListNode* head, SLTDataType x)
{
	SListNode* newnode = BuyNode(x);
    newnode->_data = x;
	newnode->_next = head;
	head = newnode;
	return head;
}

SListNode* SListPopFront(SListNode* head)
{
	if (head == NULL)
	{
		free(head);
		return;
	}
	else
	{
		SListNode* cur = head->_next;
		free(head);
		return cur;
	}
}

void SListPrint(SListNode* head)
{
	SListNode* cur = head;
	while (cur != NULL)
	{
		printf("%d->", cur->_data);
		cur = cur->_next;
	}
	printf("NULL\n");
}
