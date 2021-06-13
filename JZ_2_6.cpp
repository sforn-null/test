//��ָ Offer 06. ��β��ͷ��ӡ����
//����һ�������ͷ�ڵ㣬��β��ͷ����������ÿ���ڵ��ֵ�������鷵�أ���
//
//
//
//ʾ�� 1��
//
//���룺head = [1, 3, 2]
//�����[2, 3, 1]
//
//
//���ƣ�
//
//0 <= ������ <= 10000

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> reversePrint(ListNode* head) {
        stack<ListNode*> nodes;
        while (head) {
            nodes.push(head);
            head = head->next;
        }
        vector<int> v;
        while (!nodes.empty()) {
            head = nodes.top();
            v.push_back(head->val);
            nodes.pop();
        }
        return v;
    }
};