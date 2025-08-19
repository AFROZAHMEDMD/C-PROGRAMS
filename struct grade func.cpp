#include<stdio.h>
struct student{
	char n[20];
	int r;
	float m;
}st1;
void grade(char str[],int r,float marks)
{
	if(marks>500)
	printf("%s with roll no %d got grade A\n",str,r);
	else
	printf("%s with roll no %d got grade F\n",str,r);
}
main()
{
	printf("Enter Student details:");
	scanf("%s%d%f",st1.n,&st1.r,&st1.m);
	grade(st1.n,st1.r,st1.m);
}
