//#include<stdio.h>
//
////���ľ��ǶԳƽṹ
//
////����һ�����������һ��ʱ�临�Ӷ�ΪO(n),
////  ����ռ临�Ӷ�ΪO(1)���㷨���ж����Ƿ�Ϊ���Ľṹ��
////
////����һ�������ͷָ��A���뷵��һ��boolֵ��
//// �������Ƿ�Ϊ���Ľṹ����֤������С�ڵ���900��
////
////����������
////1->2->2->1
////���أ�true
//
//struct ListNode {
//    int val;
//    struct ListNode *next;
//};
//
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
//bool chkPalindrome(ListNode* A) {
//    // write code here
//    ListNode* slow = A;
//    ListNode* fast = A;
//    ListNode* prev = NULL;
//    while (fast && fast->next)
//    {
//        prev = slow;
//        fast = fast->next->next;
//        slow = slow->next;
//    }
//    prev->next = NULL;
//    ListNode* cur = reverseList(slow);
//    while (A)
//    {
//        if (A->val != cur->val)
//            return false;
//        A = A->next;
//        cur = cur->next;
//    }
//    return true;
//}
//};