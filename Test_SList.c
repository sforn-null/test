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
	//���������head���½��գ����Դ�head�ĵ�ַ
	//��Ȼ�Ļ�����������յ����βΣ���������ĸı䲻��Ӱ������
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