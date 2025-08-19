#include<stdio.h>
main()
{
	int n;
	printf("enter choice:");
	scanf("%d",&n);
	switch(n){
		case 1:
			{
				int i,c,fact=1;
				printf("enter num:");
				scanf("%d",&c);
				for(i=1;i<=c;i++)
				fact*=i;
				printf("%d",fact);
				break;
			}
			case 2:
				{
					int a,r,sum=0;
					printf("enter:");
					scanf("%d",&a);
					int temp=a;
					while(a>0)
					{
						r=a%10;
						sum=sum*10+r;
						a/=10;	
					}
					a=temp;
					if(a==sum)
					{
						printf("%d is a palindrome",a);
					}
					else{
						printf("%d is not a palindrome",a);
					}
					break;	
				}
				case 3:{
					int c,i=1,count=0;
					printf("enter:");
					scanf("%d",&c);
					while(i<=c){
						if(c%i==0)
						count++;
						i++;
					}
					if(count==2)
					printf("%d is a prime num",c);
					else
					printf("%d is not a prime num",c);
					
					break;
				}
				case 4:
					{
						int i,d,e;
						printf("enter:");
						scanf("%d %d",&d,&e);
						for(i=1;i<=e;i++)
						printf("%d*%d=%d\n",d,e,d*e);
						break;
						
					}
					default:
					printf("invalid choice");			
	}
}
