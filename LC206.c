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
//         //��n1��n2��������
//
//         //ͨ��������ֵ��n1 n2 n3������
//         n1 = n2;
//         n2 = n3;
//         //��n3ΪNULL��ʱ�����n3->next�����ʾ�Խ����
//         //����͹���ȥ��
//         if (n3 != NULL)
//             n3 = n3->next;
//     }
//     return n1;
// }
// 