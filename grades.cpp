#include<stdio.h>
main()
{
	int a;
	printf("enter a: ");
	scanf("%d",&a);
	if(a>500)
	{
		printf("grade a");
	}
	else if(400<a>500)
	{
		printf("grade b");
	}else{
		printf("grade c");
	}
}
