#include<stdio.h>
#include<string.h>

void reverse(char* left, char* right)
{
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
void revserse_string(char* str)
{
	char* p = str;
	while (*str)
	{
		char* i = str;
		char* j = str;
		while (*i != ' ' && *i != '\0')
		{
			i++;
		}
		reverse(j, i-1);
		if (*i == '\0')
		{
			//reverse(j, p+(strlen(p)-1));
			str = i;
		}
		else
		{
			str = i + 1;
		}
	}
	reverse(p, p + strlen(p) - 1);
}
int main()
{
	char arr[100] = { 0 };
	//不能用scanf，因为scanf遇到空格就不再输入了
	char*str = arr;
	gets_s(arr,100);
	revserse_string(arr);

	printf("%s", arr);
	return 0;
}