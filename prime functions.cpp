//without return value and with arguments

#include<stdio.h>
void prime(int a);
main()
{
	int a;
	printf("enter number:");
	scanf("%d",&a);
	prime(a);
}
void prime(int a){
	int i,isprime=1;
	
	if(a<=1){
		printf("it is a one or negtive number");
	}
	
	for(i=2;i<a;i++){
		if(a%i==0){
			isprime=0;
			break;
	}
}
	if(isprime){
		printf("%d is a prime number",a);
	}else{
		printf("%d is not aprime number",a);
	}
	
}



/*#include <stdio.h>

int main() {
    int n, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("Not prime\n");
        return 0;
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            count++;
            break;
        }
    }

    if (count != 0)
        printf("Not prime\n");
    else
        printf("Prime\n");

    printf("Try programiz.pro\n");
    return 0;
}*/

