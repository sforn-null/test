//#include<stdio.h>
////��������������ϲ�Ϊһ���µ� ���� �������ء���������ͨ��ƴ�Ӹ�����������������нڵ���ɵġ�
////
////���룺l1 = [1, 2, 4], l2 = [1, 3, 4]
////�����[1, 1, 2, 3, 4, 4]
////
////���룺l1 = [], l2 = []
////�����[]
////
////���룺l1 = [], l2 = [0]
////�����[0]
//
//  struct ListNode {
//      int val;
//      struct ListNode *next;
//  };
// 
//
//
//struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2)
//{
//    if (l1 == NULL)
//        return l2;
//    if (l2 == NULL)
//        return l1;
//    struct ListNode* head = NULL, * tail = NULL;
//    if (l1->val < l2->val)
//    {
//        head = tail = l1;
//        l1 = l1->next;
//    }
//    else
//    {
//        head = tail = l2;
//        l2 = l2->next;
//    }
//    //ȡС��β��
//    while (l1 && l2)
//    {
//        if (l1->val < l2->val)
//        {
//            tail->next = l1;
//            l1 = l1->next;
//        }
//        else
//        {
//            tail->next = l2;
//            l2 = l2->next;
//        }
//        tail = tail->next;
//    }
//    if (l1)
//        tail->next = l1;
//    if (l2)
//        tail->next = l2;
//    return head;
//}