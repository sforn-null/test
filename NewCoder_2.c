//#include<stdio.h>
//
//  struct ListNode {
// 	int val;
// 	struct ListNode *next;
//  };
// 
//
//  //��Ŀ����
//  //    ����һ����������������е�����k����㡣
//  //    ʾ��1
//  //    ����
//  //    
//  //    1, { 1,2,3,4,5 }
//  //    ����ֵ
//  //     { 5 }
// /**
//  *
//  * @param pListHead ListNode��
//  * @param k int����
//  * @return ListNode��
//  */
//struct ListNode* FindKthToTail(struct ListNode* pListHead, int k) {
//    struct ListNode* slow = pListHead;
//    struct ListNode* fast = pListHead;
//    while (k--)
//    {
//        if (fast)  //���k��������ĳ��ȣ���ô��k����0��ʱ��fast���Ѿ�ΪNULL��
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