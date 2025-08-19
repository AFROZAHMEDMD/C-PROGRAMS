#include<stdio.h>
main()
{
	char ch;
	printf("enter: ");
	scanf(" %c",&ch);
	(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')?printf("%c is a vowel",ch):printf("%c is a consonant",ch);
}
