// with retun type and with out arguments
#include<stdio.h>
int arithemtic();
main()
{
	printf("%d",arithemtic());
	
}
int arithemtic()
{
	int a,b,result,n;
	printf("enter :");
	scanf("%d %d",&a,&b);
	printf("enter choice");
	scanf("%d",&n);
	switch(n){
		case 1:{
			return a+b;
			break;
		}
		case 2:{
			return a-b;
			break;
		}
		case 3:
			{
				return a*b;
				break;
			}
		default:
		printf("wrong choice");
	}
	return arithemtic();
}
