#include<stdio.h>
main()
{
	int a,b,n;
	printf("enter a,b:");
	scanf("%d %d",&a,&b);
	printf("enter choice:");
	scanf("%d",&n);
	
	switch(n){
		case 1:
			printf("%d\n",a+b);
			break;
		case 2:
			printf("%d\n",a-b);
			break;
		case 3:
			printf("%d\n",a*b);
			break;
		case 4:
			printf("%d\n",a/b);
			break;
		case 5:
			printf("%d\n",a%b);
			break;
		default:
			printf("wrong choice");
			
	}
	
}
