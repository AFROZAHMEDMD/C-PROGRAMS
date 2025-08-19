#include<stdio.h>
#define SIZE 3
struct student{
	char n[20];
	int r;
	float m;
};
struct student st[SIZE];
main()
{
	int i;
	for(i=0;i<SIZE;i++)
	{
		
		printf("enter student %d details:",i+1);
		scanf("%s%d%f",st[i].n,&st[i].r,&st[i].m);
	}
	
	for(i=0;i<SIZE;i++)
	{
		printf("%s %d %0.2f\n",st[i].n,st[i].r,st[i].m);
	}
}

