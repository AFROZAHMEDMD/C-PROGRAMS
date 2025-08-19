#include<stdio.h>
#include<string.h>
main()
{
	char st[20];
	int l=0,i;
	printf("enter string:");
	scanf("%s",st);
	for(i=0;st[i]!='\0';i++){
	l++;
	}
	printf("%d",l);
}
