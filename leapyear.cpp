#include<stdio.h>
main()
{
	int year1, year2, leapyear1,leapyear2;
	//int leapyear= (year%4==0)&&((year%100!=0)||(year%400==0));
	printf("enter year1 and year2:");
	scanf("%d %d",&year1,&year2);
	leapyear1= (year1%4==0)&&((year1%100!=0)||(year1%400==0));
	leapyear2= (year2%4==0)&&((year2%100!=0)||(year2%400==0));
	printf("%d,%d",leapyear1,leapyear2);
}

/*#include <stdio.h>
int main()
{
    int year;

    printf("Enter year: ");
    scanf("%d", &year);

    ( (year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0)) )
        ? printf("Leap year\n")
        : printf("Not a leap year\n");

    return 0;
}*/

