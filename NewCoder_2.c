//#include<stdio.h>
//
//  struct ListNode {
// 	int val;
// 	struct ListNode *next;
//  };
// 
//
//  //题目描述
//  //    输入一个链表，输出该链表中倒数第k个结点。
//  //    示例1
//  //    输入
//  //    
//  //    1, { 1,2,3,4,5 }
//  //    返回值
//  //     { 5 }
// /**
//  *
//  * @param pListHead ListNode类
//  * @param k int整型
//  * @return ListNode类
//  */
//struct ListNode* FindKthToTail(struct ListNode* pListHead, int k) {
//    struct ListNode* slow = pListHead;
//    struct ListNode* fast = pListHead;
//    while (k--)
//    {
//        if (fast)  //如果k大于链表的长度，那么当k大于0的时候，fast就已经为NULL了
//            fast = fast->next;
//        else
//            return NULL;
//    }
//    while (fast)
//    {
//        fast = fast->next;
//        slow = slow->next;
//    }
//    return slow;
//    // write code here
//}