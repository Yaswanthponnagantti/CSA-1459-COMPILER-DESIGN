#include<stdio.h>
int main()
{
	char a[30];
	int i;
	printf("enter the line = \n");
	gets(a);
	if(a[0]=='/' && a[1]=='/')
	{
		printf("it is a comment");
	}
	else
	if(a[0]=='/' && a[1]=='*' && a[i-2]=='*' && a[i-1]=='/')
	{
		printf("it is a multi comment");
	}
	else 
	printf("it isa not a comment");
	return 0;
}
