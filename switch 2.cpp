#include<stdio.h>
int main()
{
	int n,choice,a,b;
	printf("Enter number for positive  or negitve  or even or odd  ");
	scanf("%d",&n);
	printf("Enter numbers for arhimetic calcualtion ");
	scanf("%d%d",&a,&b);
	printf(" select 1 for even or odd \n");
	printf(" select 2 for positive or negative \n");
	printf(" select 3 for arthimetic calculation \n");
	
	printf("Enter choice ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			n%2==0 ? printf("even") :  printf("odd");
		   break;
		   	case 2:
			n>0 ? printf("positive") :  printf("negative");
		   break;
		case 3:
			printf(" select 4 for add \n");
		printf(" select 5 for sub \n");
			printf("\nEnter choice ");
	scanf("%d",&choice);
	switch(choice)
	{
			case 4:
				printf("%d\n",a+b);
				break;
case 5:
						printf("%d\n",a-b);
	}
	default:
		printf("wrong");
	

}
    return 0;
}
