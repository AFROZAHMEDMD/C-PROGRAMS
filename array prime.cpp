/*#include<stdio.h>
#include<math.h>
# define SIZE 5

int prime(int n)
{
	int i;
	if(n<2)
	{
		return 0;
	}
	else{
		for(i=2;i<=sqrt(n);i++)
		{
			if(n%i==0)
			{
				return 0;
			}
		}
	}
	return 1;
	
}
main()
{
	int n[SIZE],i;
	printf("enter num:");
	for(int i=0;i<SIZE;i++)
	scanf("%d",&n[i]);
	for(i=0;i<SIZE;i++)
	{
		if(prime(n[i]))
		printf("%d is a prime number \n",n[i]);
		else
		printf("it is not a prime number\n");
	}
}*/


#include <stdio.h>
#include <math.h>

int isPrimeHelper(int n, int i) {
    if (n < 2)
        return 0;  // Not prime
    if (i > sqrt(n))
        return 1;  // Checked all, it's prime
    if (n % i == 0)
        return 0;  // Divisible, not prime

    return isPrimeHelper(n, i + 1);  // Check next divisor
}

//int prime(int n) {
  //  return isPrimeHelper(n, 2);
//}

int main() {
    int n,i;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPrimeHelper(n,2))
        printf("%d is a prime number\n", n);
    else
        printf("%d is not a prime number\n", n);

    return 0;
}

