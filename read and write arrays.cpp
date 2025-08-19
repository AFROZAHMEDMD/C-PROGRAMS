#include<stdio.h>
#define SIZE 10 //macros
main(){
	int a[SIZE],i;
	for(i=0;i<SIZE;i++){
		printf("enter element %d:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<SIZE;i++)
	printf("%d ",a[i]);
	
}
