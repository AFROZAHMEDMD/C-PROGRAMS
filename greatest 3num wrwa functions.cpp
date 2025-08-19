// with return type and argument

#include <stdio.h>
int greatest_of_three(int a, int b, int c);
int bitwise_max(int a, int b);
int main() {
    int a, b, c;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    int result = greatest_of_three(a, b, c);
    printf("The greatest number is: %d\n", result);

    return 0;
}

int bitwise_max(int a, int b) {
    int diff = a - b;
    return a - (diff & (diff >> 31));
}
int greatest_of_three(int a, int b, int c) {
    int max_ab = bitwise_max(a, b);
    return bitwise_max(max_ab, c);
}

/*#include<stdio.h>
int max(int a, int b,int c);
main()
{
	int a,b,c;
	printf("enter:");
	scanf("%d%d%d",&a,&b,&c);
	int d= max(a,b,c);
	printf("%d is greattest",d);
}
int max(int a,int b,int c){
	if(a>b&&a>c){
		return a;
	}else if(b>c){
		return b;
	}else 
	return c;
}*/
