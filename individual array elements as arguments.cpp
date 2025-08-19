#include<stdio.h>
void even_odd(int);
main()
{
	int a[5],i;
	printf("Enter number:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++){
		
		even_odd(a[i]);
	}
}
void even_odd(int n)
{
	n%2==0?printf("%d is even \n",n):printf("%d is odd\n",n);
	
}
