//without return value and with arguments
#include<stdio.h>
void positive(int );
main()
{
	int a;
	printf("enter number:");
	scanf("%d",&a);
	positive(a);
}
void positive(int a){
	
	if(a>0){
		printf("%d is positive number",a);
	}else{
		printf("%d is negative number",a);
	}
}
