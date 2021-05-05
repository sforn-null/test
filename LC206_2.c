//#include<stdio.h>
//
////反转一个单链表。
////
////示例 :
////
////输入: 1->2->3->4->5->NULL
////输出 : 5->4->3->2->1->NULL
//
//
//struct ListNode {
//    int val;
//    struct ListNode* next;
//};
//
////头插的思路解决
////其实和上一种方法没什么区别
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