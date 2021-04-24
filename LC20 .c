//给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串 s ，判断字符串是否有效。
//
//有效字符串需满足：
//
//左括号必须用相同类型的右括号闭合。
//左括号必须以正确的顺序闭合。
//
//
//示例 1：
//
//输入：s = "()"
//输出：true
//示例 2：
//
//输入：s = "()[]{}"
//输出：true
//示例 3：
//
//输入：s = "(]"
//输出：false
//示例 4：
//
//输入：s = "([)]"
//输出：false
//示例 5：
//
//输入：s = "{[]}"
//输出：true
//
//
//提示：
//
//1 <= s.length <= 104
//s 仅由括号 '()[]{}' 组成

#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

typedef char STDataType;
typedef struct Stack
{
	STDataType* _a;
	int _top;//栈顶下标
	int _capacity;//容量
}Stack;

void StackInit(Stack* pst);
//初始化

void StackDestory(Stack* pst);
//销毁

void StackPush(Stack* pst, STDataType x);
//入栈

void StackPop(Stack* pst);
//出栈

int StackSize(Stack* pst);
//数据个数

int StackEmpty(Stack* pst);
//返回1是空 返回0是非空

STDataType StackTop(Stack* pst);
//获得栈顶的数据


void StackInit(Stack* pst)
{
	/*assert(pst);
	pst->_a = NULL;
	pst->_top = 0;
	pst->_capacity = 0;*/
	//但是这种方式，第一次放数据不好放不好放

	pst->_a = malloc(sizeof(STDataType) * 4);
	pst->_top = 0;
	pst->_capacity = 4;
}

void StackDestory(Stack* pst)
{
	assert(pst);
	free(pst->_a);
	pst->_a = NULL;
	pst->_top = 0;
	pst->_capacity = 0;
}

void StackPush(Stack* pst, STDataType x)
{
	assert(pst);
	if (pst->_top == pst->_capacity)
	{
		pst->_capacity *= 2;
		STDataType* tmp = (STDataType*)realloc(pst->_a, sizeof(STDataType) * pst->_capacity);
		if (tmp == NULL)
		{
			printf("内存不足");
			exit(-1);
		}
		else
		{
			pst->_a = tmp;
		}
	}
	pst->_a[pst->_top] = x;
	pst->_top++;
}

void StackPop(Stack* pst)
{
	assert(pst);
	assert(pst->_top > 0);
	pst->_top--;
}

int StackSize(Stack* pst)
{
	assert(pst);
	return pst->_top;
}

int StackEmpty(Stack* pst)
{
	assert(pst);
	/*if (pst->_top == 0)
		return 1;
	else
		return 0;*/
	return pst->_top == 0 ? 1 : 0;
}

STDataType StackTop(Stack* pst)
{
	assert(pst);
	assert(pst->_top > 0);
	return pst->_a[pst->_top - 1];
}

bool isValid(char* s)
{
	Stack st;
	StackInit(&st);
	while (*s != '\0')
	{
		if (*s == '(' || *s == '{' || *s == '[')
		{
			StackPush(&st, *s);
			s++;
		}
		else
		{
			if (StackEmpty(&st))
			{
				StackDestory(&st);
				return false;
			}

			char top = StackTop(&st);
			if (*s == ')' && top != '(')
			{
				StackDestory(&st);
				return false;
			}
			if (*s == ']' && top != '[')
			{
				StackDestory(&st);
				return false;
			}

			if (*s == '}' && top != '{')
			{
				StackDestory(&st);
				return false;
			}


			StackPop(&st);
			s++;
		}
	}
	int ret = StackEmpty(&st);
	StackDestory(&st);
	return ret;
}
