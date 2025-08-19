//without return value and with arguments
#include <stdio.h>

void vowel(char ch);  

main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);  
    vowel(ch); 
    
}

void vowel(char ch) {
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("'%c' is a vowel.\n", ch);
    } else {
        printf("'%c' is not a vowel.\n", ch);
    }
}

