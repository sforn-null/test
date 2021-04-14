#include<stdio.h>

//给你一个链表的头节点 head 和一个整数 val ，
//请你删除链表中所有满足 Node.val == val 的节点，
//并返回 新的头节点 。
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
            if (cur == head)//如果头结点是要删除的
            {               //那么之前释放掉的就是头结点，因此让头结点等于next
                head = next;
            }
            else
            {
                prev->next = next;//如果不是头结点，那么就让之前的节点->next指向next
            }
            cur = next;          //最后都需要将next赋值给cur，为了让cur往后走
        }
        else
        {
            prev = cur;          //先将cur的值赋给prev然后让cur往后走
            cur = cur->next;
        }
    }
    return head;
}