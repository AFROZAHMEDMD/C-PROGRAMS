//with return type and with arguments
#include<stdio.h>
int greatest(int a, int b);
main()
{
	int a,b,c;
	printf("Enter:");
	scanf("%d%d",&a,&b);
	greatest(a,b);
	printf("%d is a greatest",greatest(a,b));
	
}
int greatest(int a, int b) {
    int diff = a - b;
    int max = a - (diff & (diff >> 31));
    return max;
}

