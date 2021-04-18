#include<stdio.h>

//����һ�������ж��������Ƿ��л���
//
//�����������ĳ���ڵ㣬����ͨ���������� next ָ���ٴε���������д��ڻ��� 
// Ϊ�˱�ʾ���������еĻ���
// ����ʹ������ pos ����ʾ����β���ӵ������е�λ�ã������� 0 ��ʼ����
//  ��� pos �� - 1�����ڸ�������û�л���ע�⣺pos ����Ϊ�������д��ݣ�
// ������Ϊ�˱�ʶ�����ʵ�������
//
//��������д��ڻ����򷵻� true �� ���򣬷��� false ��


 struct ListNode {
     int val;
     struct ListNode *next;
 };
 

bool hasCycle(struct ListNode* head) {
    struct ListNode* fast = head;
    struct ListNode* slow = head;
    while (fast && fast->next)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow)
            return true;
    }
    return false;
}
