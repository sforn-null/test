#include<stdio.h>
 

//给定一个头结点为 head 的非空单链表，返回链表的中间结点。
//
//如果有两个中间结点，则返回第二个中间结点。
//
//
//
//示例 1：
//
//输入：[1, 2, 3, 4, 5]
//输出：此列表中的结点 3 (序列化形式：[3, 4, 5])
//返回的结点值为 3 。(测评系统对该结点序列化表述是[3, 4, 5])。
//注意，我们返回了一个 ListNode 类型的对象 ans，这样：
//ans.val = 3, ans.next.val = 4, ans.next.next.val = 5, 以及 ans.next.next.next = NULL.
//示例 2：
//
//输入：[1, 2, 3, 4, 5, 6]
//输出：此列表中的结点 4 (序列化形式：[4, 5, 6])
//由于该列表有两个中间结点，值分别为 3 和 4，我们返回第二个结点。

  struct ListNode {
      int val;
      struct ListNode *next;
  };
 

  //解题思路是快慢指针
  //因为如果链表有奇数个的话就返回中间那个
  //有偶数个就返回后一个，那么有两种方法
  //第一种是遍历一次链表找出一共有多少个，
  //然后确定基数还是偶数，再返回
  //第二种就是快慢指针
  //快指针一次动两个，慢指针一次一个，
  //那么如果是奇数个，当快指针指向最后那个节点的时候
  //慢指针正好在中间
  //如果是偶数个，当快指针指向最后一个节点的后一个时，
  //也就是NULL时，慢指针正好在中间的后一个
struct ListNode* middleNode(struct ListNode* head)
{
    struct ListNode* fast = head, * slow = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}