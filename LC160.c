//#include<stdio.h>
//
////编写一个程序，找到两个单链表相交的起始节点。
//
//
// struct ListNode {
//     int val;
//     struct ListNode *next;
// };
//
// struct ListNode* getIntersectionNode(struct ListNode* headA, struct ListNode* headB)
// {
//     int la = 0;
//     int lb = 0;
//     struct ListNode* curA = headA;
//     struct ListNode* curB = headB;
//     while (curA)
//     {
//         la++;
//         curA = curA->next;
//     }
//     while (curB)
//     {
//         lb++;
//         curB = curB->next;
//     }
//     struct ListNode* longlist = headA;
//     struct ListNode* sortlist = headB;
//     if (lb > la)
//     {
//         longlist = headB;
//         sortlist = headA;
//     }
//     int gap = abs(la - lb);
//     while (gap--)
//     {
//         longlist = longlist->next;
//     }
//     while (longlist)
//     {
//         if (longlist == sortlist)
//         {
//             return longlist;
//         }
//         longlist = longlist->next;
//         sortlist = sortlist->next;
//     }
//     return NULL;
// }
// 