//without return value and with arguments

#include<stdio.h>
void leapyear(int);
main()
{
	int year;

    printf("Enter year: ");
    scanf("%d", &year);
    leapyear(year);
    return 0;
    
}
void leapyear(int year){

    if((year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0)) )
    {
    	printf("Leap year\n");
	}else
	printf("Not a leap year\n");
}


/*#include <stdio.h>

void leapyear(int year) {
    if ((year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0))) {
        printf("Leap year\n");
    } else {
        printf("Not a leap year\n");
    }
}

int main() {
    int year;
    printf("Enter year: ");
    scanf("%d", &year);
    leapyear(year);
    return 0;
}*/

