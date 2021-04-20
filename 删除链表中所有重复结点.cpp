#include<stdio.h>
//
//在一个排序的链表中，
// 存在重复的结点，
// 请删除该链表中重复的结点，
// 重复的结点不保留，返回链表头指针。 
// 例如，链表1->2->3->3->4->4->5 处理后为 1->2->5
//
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
};

class Solution {
public:
    ListNode* deleteDuplication(ListNode* pHead)
    {
        if (pHead == NULL || pHead->next == NULL)
        {
            return pHead;
        }
        ListNode* cur = pHead;
        ListNode* prev = NULL;
        ListNode* next = cur->next;
        while (next)
        {
            if (cur->val != next->val)
            {
                prev = cur;
                cur = next;
                next = next->next;
            }
            else
            {
                while (next && cur->val == next->val)
                {
                    next = next->next;
                }
                if (prev == NULL)
                {
                    pHead = next;
                }
                else
                {
                    prev->next = next;
                }
                while (cur != next)
                {
                    ListNode* del = cur;
                    cur = cur->next;
                    free(del);
                }
                if (next)
                {
                    next = cur->next;
                }
            }
        }
        return pHead;
    }
};