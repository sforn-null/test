//622. 设计循环队列
//设计你的循环队列实现。 循环队列是一种线性数据结构，
// 其操作表现基于 FIFO（先进先出）原则
// 并且队尾被连接在队首之后以形成一个循环。
// 它也被称为“环形缓冲器”。
//
//循环队列的一个好处是我们可以利用这个队列之前用过的空间。
// 在一个普通队列里，一旦一个队列满了，
// 我们就不能插入下一个元素，
// 即使在队列前面仍有空间。但是使用循环队列，
// 我们能使用这些空间去存储新的值。
//
//你的实现应该支持如下操作：
//
//MyCircularQueue(k) : 构造器，设置队列长度为 k 。
//Front : 从队首获取元素。如果队列为空，返回 - 1 。
//Rear : 获取队尾元素。如果队列为空，返回 - 1 。
//enQueue(value) : 向循环队列插入一个元素。如果成功插入则返回真。
//deQueue() : 从循环队列中删除一个元素。如果成功删除则返回真。
//isEmpty() : 检查循环队列是否为空。
//isFull() : 检查循环队列是否已满。
//
//
//示例：
//
//MyCircularQueue circularQueue = new MyCircularQueue(3); // 设置长度为 3
//circularQueue.enQueue(1);  // 返回 true
//circularQueue.enQueue(2);  // 返回 true
//circularQueue.enQueue(3);  // 返回 true
//circularQueue.enQueue(4);  // 返回 false，队列已满
//circularQueue.Rear();  // 返回 3
//circularQueue.isFull();  // 返回 true
//circularQueue.deQueue();  // 返回 true
//circularQueue.enQueue(4);  // 返回 true
//circularQueue.Rear();  // 返回 4
//
//
//提示：
//
//所有的值都在 0 至 1000 的范围内；
//操作数将在 1 至 1000 的范围内；
//请不要使用内置的队列库。


typedef struct
{
    int* _a;
    int _front;
    int _rear;
    int _k;
} MyCircularQueue;



MyCircularQueue* myCircularQueueCreate(int k)
{
    MyCircularQueue* q = (MyCircularQueue*)malloc(sizeof(MyCircularQueue));
    q->_a = (int*)malloc(sizeof(int) * (k + 1));//多开一个
    q->_front = 0;
    q->_rear = 0;
    q->_k = k;
    return q;
}


bool myCircularQueueIsEmpty(MyCircularQueue* obj);

bool myCircularQueueIsFull(MyCircularQueue* obj);
bool myCircularQueueEnQueue(MyCircularQueue* obj, int value)
{
    if (myCircularQueueIsFull(obj))
    {
        return false;
    }
    else
    {
        obj->_a[obj->_rear] = value;
        obj->_rear++;
        obj->_rear = (obj->_rear) % (obj->_k + 1);
        return true;
    }
}

bool myCircularQueueDeQueue(MyCircularQueue* obj)
{
    if (myCircularQueueIsEmpty(obj))
    {
        return false;
    }
    else
    {
        obj->_front++;
        obj->_front = (obj->_front) % (obj->_k + 1);
        return true;
    }
}

int myCircularQueueFront(MyCircularQueue* obj)
{
    if (myCircularQueueIsEmpty(obj))
    {
        return -1;
    }
    else
    {
        return obj->_a[obj->_front];
    }
}

int myCircularQueueRear(MyCircularQueue* obj)
{
    if (myCircularQueueIsEmpty(obj))
    {
        return -1;
    }
    else
    {
        int tail = obj->_rear - 1;
        if (tail == -1)
        {
            tail = obj->_k;
        }
        return obj->_a[tail];
    }
}

bool myCircularQueueIsEmpty(MyCircularQueue* obj)
{
    return obj->_front == obj->_rear;
}

bool myCircularQueueIsFull(MyCircularQueue* obj)
{
    return (obj->_rear + 1) % (obj->_k + 1) == obj->_front;
}

void myCircularQueueFree(MyCircularQueue* obj)
{
    free(obj->_a);
    free(obj);
}

/**
 * Your MyCircularQueue struct will be instantiated and called as such:
 * MyCircularQueue* obj = myCircularQueueCreate(k);
 * bool param_1 = myCircularQueueEnQueue(obj, value);

 * bool param_2 = myCircularQueueDeQueue(obj);

 * int param_3 = myCircularQueueFront(obj);

 * int param_4 = myCircularQueueRear(obj);

 * bool param_5 = myCircularQueueIsEmpty(obj);

 * bool param_6 = myCircularQueueIsFull(obj);

 * myCircularQueueFree(obj);
*/
