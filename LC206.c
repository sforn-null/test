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
// struct ListNode {
//     int val;
//     struct ListNode *next;
// };
//
// struct ListNode* reverseList(struct ListNode* head)
// {
//     if (head == NULL || head->next == NULL)
//     {
//         return head;
//     }
//     struct ListNode* n1 = NULL, * n2 = head, * n3 = head->next;
//     while (n2)
//     {
//         n2->next = n1;
//         //将n1和n2链接起来
//
//         //通过挨个赋值将n1 n2 n3往后走
//         n1 = n2;
//         n2 = n3;
//         //当n3为NULL的时候，如果n3->next，访问就越界了
//         //编译就过不去了
//         if (n3 != NULL)
//             n3 = n3->next;
//     }
//     return n1;
// }
// 