#include<stdio.h>
main()
{
	int a,even,odd ;
	scanf("%d",&a);
	//printf("%s",(a%2==0)?"even":"odd");
	printf("%s\n",(a&1)?"odd":"even");
}
