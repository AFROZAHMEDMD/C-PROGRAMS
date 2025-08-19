//without return value and with arguments

#include<stdio.h>
void palindrome(int);
main()
{
	int a;
	printf("enter integer:");
	scanf("%d",&a);
	palindrome(a);
}
void palindrome(int n)
{
	int r,sum=0,temp=n;
	while(n!=0)
	{
		r=n%10;
		sum=sum*10+r;
		n/=10;
	}
n=temp;
if(n==sum)
printf("palindrome");
else
printf("not palindrome");
}


