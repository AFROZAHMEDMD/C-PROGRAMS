#include<stdio.h>
int main()
{
	char str[100];
	int n=0;
	printf("enter string:");
	scanf("%s",str);
	while(str[n]!='\0'){
		n++;
	}
	printf("length of string is %d",n);
}
