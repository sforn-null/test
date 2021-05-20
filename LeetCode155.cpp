//155. ��Сջ
//���һ��֧�� push ��pop ��top �����������ڳ���ʱ���ڼ�������СԪ�ص�ջ��
//
//push(x) ���� ��Ԫ�� x ����ջ�С�
//pop() ���� ɾ��ջ����Ԫ�ء�
//top() ���� ��ȡջ��Ԫ�ء�
//getMin() ���� ����ջ�е���СԪ�ء�
//
//
//ʾ�� :
//
//���룺
//["MinStack", "push", "push", "push", "getMin", "pop", "top", "getMin"]
//[[], [-2], [0], [-3], [], [], [], []]
//
//�����
//[null, null, null, null, -3, null, 0, -2]
//
//���ͣ�
//MinStack minStack = new MinStack();
//minStack.push(-2);
//minStack.push(0);
//minStack.push(-3);
//minStack.getMin();   -- > ���� - 3.
//minStack.pop();
//minStack.top();      -- > ���� 0.
//minStack.getMin();   -- > ���� - 2.

class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {}

    void push(int val)
    {
        _st.push(val);
        if (_minst.empty() || _minst.top() >= val)
        {
            _minst.push(val);
        }
    }

    void pop()
    {
        if (_st.top() == _minst.top())
        {
            _minst.pop();
        }
        _st.pop();

    }

    int top()
    {
        return _st.top();
    }

    int getMin()
    {
        return _minst.top();
    }
    stack<int> _st;
    stack<int> _minst;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */