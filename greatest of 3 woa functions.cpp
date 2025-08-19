//with return type and without arguments
#include<stdio.h>
int max();
main()
{
	printf("%d",max());
}
int max()
{
	int a,b,c;
	printf("enter:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c){
		return a;
	}else if(b>c){
		return b;
	}else 
	return c;
}
