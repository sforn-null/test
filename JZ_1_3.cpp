//JZ3 从尾到头打印链表
//
//描述
//输入一个链表的头节点，按链表从尾到头的顺序返回每个节点的值（用数组返回）。
//
//如输入{ 1,2,3 }的链表如下图:
//
//返回一个数组为[3, 2, 1]
//
//0 <= 链表长度 <= 1000
//示例1
//输入：
//{ 1,2,3 }
//复制
//返回值：
//[3, 2, 1]
//复制
//示例2
//输入：
//{ 67,0,24,58 }
//复制
//返回值：
//[58, 24, 0, 67]
//复制

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