#include<stdio.h>

//����һ�������ͷ�ڵ� head ��һ������ val ��
//����ɾ���������������� Node.val == val �Ľڵ㣬
//������ �µ�ͷ�ڵ� ��
// Definition for singly-linked list.
  struct ListNode {
     int val;
     struct ListNode *next;
 };
 


struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode* prev = NULL;
    struct ListNode* cur = head;
    struct ListNode* next = NULL;
    while (cur != NULL)
    {
        if (cur->val == val)
        {
            next = cur->next;
            free(cur);
            if (cur == head)//���ͷ�����Ҫɾ����
            {               //��ô֮ǰ�ͷŵ��ľ���ͷ��㣬�����ͷ������next
                head = next;
            }
            else
            {
                prev->next = next;//�������ͷ��㣬��ô����֮ǰ�Ľڵ�->nextָ��next
            }
            cur = next;          //�����Ҫ��next��ֵ��cur��Ϊ����cur������
        }
        else
        {
            prev = cur;          //�Ƚ�cur��ֵ����prevȻ����cur������
            cur = cur->next;
        }
    }
    return head;
}