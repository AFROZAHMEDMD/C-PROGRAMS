//without return value and with arguments
#include<stdio.h>
void vote(int);
main()
{
	int a;
	printf("Enter:");
	scanf("%d",&a);
	vote(a);
}
void vote(int a){
	if(a>=18){
		printf("eligible for vote");
	}else{
		printf("not eligible for vote");
	}
}
