#include<stdio.h>
struct student{
	char n[20];
	int r;
	float m;
}st1;
void grade(float marks)
{
	if(marks>500)
	printf("grade A\n");
	else
	printf("grade F\n");
}
main()
{
	printf("Enter Student details:");
	scanf("%s%d%f",st1.n,&st1.r,&st1.m);
	grade(st1.m);
}
