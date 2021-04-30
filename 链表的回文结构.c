//#include<stdio.h>
//
////回文就是对称结构
//
////对于一个链表，请设计一个时间复杂度为O(n),
////  额外空间复杂度为O(1)的算法，判断其是否为回文结构。
////
////给定一个链表的头指针A，请返回一个bool值，
//// 代表其是否为回文结构。保证链表长度小于等于900。
////
////测试样例：
////1->2->2->1
////返回：true
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