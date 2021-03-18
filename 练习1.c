#include<stdio.h>
#include<string.h>
 int main ()
 {
	char arr1[] = "bit"; 
	char arr2[20] = "##########";
	strcpy (arr2,arr1);
	printf("%s\n",arr2);
	return 0;
 }

int main()
{
	char arr[] ="hello world";
	memset(arr,'*',5);
	printf("%s\n",arr);
	return 0;
}
