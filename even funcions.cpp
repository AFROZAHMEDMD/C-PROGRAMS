#include<stdio.h>
void even(int);
main()
{
	int a;
	printf("enter:");
	scanf("%d",&a);
	even(a);
}
void even(int a){
	if(a%2==0){
		printf("even number");
	}
	else{
		printf("not even number");
		
	}
	
}
