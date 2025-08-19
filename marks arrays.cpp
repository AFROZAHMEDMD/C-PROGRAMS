#include<stdio.h>
#define SIZE 10 //macros
main(){
	float marks[SIZE];
	int i;
	for(i=0;i<SIZE;i++){
		printf("enter marks %d:",i);
		scanf("%d",&marks[i]);
	}
	for(i=0;i<SIZE;i++)
	printf("\nmarks of 10 members:\n%d ",marks[i]);
	
}
