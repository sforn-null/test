//请你仅使用两个队列实现一个后入先出（LIFO）的栈，并支持普通队列的全部四种操作（push、top、pop 和 empty）。
//
//实现 MyStack 类：
//
//void push(int x) 将元素 x 压入栈顶。
//int pop() 移除并返回栈顶元素。
//int top() 返回栈顶元素。
//boolean empty() 如果栈是空的，返回 true ；否则，返回 false 。
//
//
//注意：
//
//你只能使用队列的基本操作 —— 也就是 push to back、peek / pop from front、size 和 is empty 这些操作。
//你所使用的语言也许不支持队列。 你可以使用 list （列表）或者 deque（双端队列）来模拟一个队列 , 只要是标准的队列操作即可。
//
//
//示例：
//
//输入：
//["MyStack", "push", "push", "top", "pop", "empty"]
//[[], [1], [2], [], [], []]
//输出：
//[null, null, null, 2, 2, false]
//
//解释：
//MyStack myStack = new MyStack();
//myStack.push(1);
//myStack.push(2);
//myStack.top(); // 返回 2
//myStack.pop(); // 返回 2
//myStack.empty(); // 返回 False
//
//
//提示：
//
//1 <= x <= 9
//最多调用100 次 push、pop、top 和 empty
//每次调用 pop 和 top 都保证栈不为空
//

#include<stdio.h>
#include<assert.h>
#include<stdlib.h>


typedef int QDataType;
typedef struct QueueNode
{
	QDataType _data;
	struct QueueNode* _next;
}QueueNode;

typedef struct Queue
{
	QueueNode* _head;
	QueueNode* _tail;
}Queue;
typedef struct {
	Queue _q1;
	Queue _q2;
} MyStack;

void QueueInit(Queue* pq);

void QueueDestory(Queue* pq);

void Queuepush(Queue* pq, QDataType x);

void QueuePop(Queue* pq);

QDataType QueueFront(Queue* pq);

QDataType QueueBack(Queue* pq);

int QueueEmpty(Queue* pq);
//返回1是空，返回0是非空

int QueueSize(Queue* pq);

void QueueInit(Queue* pq)
{
	assert(pq);
	pq->_head = NULL;
	pq->_tail = NULL;
}

void QueueDestory(Queue* pq)
{
	QueueNode* cur = pq->_head;
	while (cur)
	{
		QueueNode* next = cur->_next;
		free(cur);
		cur = next;
	}

	pq->_head = pq->_tail = NULL;
}

void Queuepush(Queue* pq, QDataType x)
{
	assert(pq);
	QueueNode* newnode = (QueueNode*)malloc(sizeof(QueueNode));
	if (newnode == NULL)
	{
		printf("内存不足");
		exit(-1);
	}
	newnode->_data = x;
	newnode->_next = NULL;
	if (pq->_head == NULL)
	{
		pq->_head = pq->_tail = newnode;
	}
	else
	{
		pq->_tail->_next = newnode;
		pq->_tail = newnode;
	}
}

void QueuePop(Queue* pq)
{
	assert(pq);
	assert(pq->_head);
	QueueNode* next = pq->_head->_next;
	free(pq->_head);
	pq->_head = next;
	if (pq->_head == NULL)
	{
		pq->_tail = NULL;
	}
}

QDataType QueueFront(Queue* pq)
{
	assert(pq);
	assert(pq->_head);

	return pq->_head->_data;
}

QDataType QueueBack(Queue* pq)
{
	assert(pq);
	assert(pq->_tail);

	return pq->_tail->_data;
}

int QueueEmpty(Queue* pq)
{
	assert(pq);
	return pq->_head == NULL ? 1 : 0;
}

int QueueSize(Queue* pq)
{
	assert(pq);
	int size = 0;
	QueueNode* cur = pq->_head;
	while (cur)
	{
		size++;
		cur = cur->_next;
	}
	return size;
}




/** Initialize your data structure here. */

MyStack* myStackCreate()
{
	MyStack* st = (MyStack*)malloc(sizeof(MyStack));
	QueueInit(&st->_q1);
	QueueInit(&st->_q2);
	return st;
}

/** Push element x onto stack. */
void myStackPush(MyStack* obj, int x)
{
	if (!(QueueEmpty(&obj->_q1)))
	{
		Queuepush(&obj->_q1, x);
	}
	else
	{
		Queuepush(&obj->_q2, x);
	}
}

/** Removes the element on top of the stack and returns that element. */
int myStackPop(MyStack* obj)
{
	Queue* empty = &obj->_q1;
	Queue* noempty = &obj->_q2;
	if (QueueEmpty(noempty))
	{
		empty = &obj->_q2;
		noempty = &obj->_q1;
	}
	while (QueueSize(noempty) > 1)
	{
		Queuepush(empty, QueueFront(noempty));
		QueuePop(noempty);
	}
	int ret = QueueFront(noempty);
	QueuePop(noempty);
	return ret;
}

/** Get the top element. */
int myStackTop(MyStack* obj)
{
	if (!QueueEmpty(&obj->_q1))
	{
		return QueueBack(&obj->_q1);
	}
	else
	{
		return QueueBack(&obj->_q2);
	}
}

/** Returns whether the stack is empty. */
bool myStackEmpty(MyStack* obj) {
	return QueueEmpty(&obj->_q1) && QueueEmpty(&obj->_q2);
}

void myStackFree(MyStack* obj)
{
	QueueDestory(&obj->_q1);
	QueueDestory(&obj->_q2);
	free(obj);
}

/**
 * Your MyStack struct will be instantiated and called as such:
 * MyStack* obj = myStackCreate();
 * myStackPush(obj, x);

 * int param_2 = myStackPop(obj);

 * int param_3 = myStackTop(obj);

 * bool param_4 = myStackEmpty(obj);

 * myStackFree(obj);
*/