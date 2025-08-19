#include<stdio.h>
main()
{
	int a,b,c,max;
	printf("Enter:");
	scanf("%d%d%d",&a,&b,&c);
	//max= (a > b && a > c) ? a :  (b > c) ? b : c;
	max=a>b?((a>c)?a:c):((b>c)?b:c);
	printf("%d is greatest",max);
}
