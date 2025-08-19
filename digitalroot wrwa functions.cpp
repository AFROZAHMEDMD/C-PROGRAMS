// with return type and argument
#include<stdio.h>
int digitalroot(int a);
main()
{
	int a,b;
	printf("enter:");
	scanf("%d",&a);
	b=digitalroot(a);
	printf("%d",b);
}
int digitalroot(int a){
	 int singledigit=1+(a-1)%9;
	 return singledigit;
	 
}
