//#include<stdio.h>
//
////��תһ��������
////
////ʾ�� :
////
////����: 1->2->3->4->5->NULL
////��� : 5->4->3->2->1->NULL
//
//
//struct ListNode {
//    int val;
//    struct ListNode* next;
//};
//
////ͷ���˼·���
////��ʵ����һ�ַ���ûʲô����
//struct ListNode* reverseList(struct ListNode* head)
//{
//
//    struct ListNode* newhead = NULL, * cur = head;
//    while (cur)
//    {
//        struct ListNode* next = cur->next;
//        cur->next = newhead;
//        newhead = cur;
//        cur = next;
//    }
//    return newhead;
//}