//JZ3 ��β��ͷ��ӡ����
//
//����
//����һ�������ͷ�ڵ㣬�������β��ͷ��˳�򷵻�ÿ���ڵ��ֵ�������鷵�أ���
//
//������{ 1,2,3 }����������ͼ:
//
//����һ������Ϊ[3, 2, 1]
//
//0 <= ������ <= 1000
//ʾ��1
//���룺
//{ 1,2,3 }
//����
//����ֵ��
//[3, 2, 1]
//����
//ʾ��2
//���룺
//{ 67,0,24,58 }
//����
//����ֵ��
//[58, 24, 0, 67]
//����

/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/
class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        vector<int> rv;
        while (head)
        {
            rv.push_back(head->val);
            head = head->next;
        }
        reverse(rv.begin(), rv.end());
        return rv;
    }
};