#include<stdio.h>
int countOnes(unsigned char byte);
int main()
{
	int n;
	printf("enter a number:");
	scanf("%d",&n);
	if(n<0||n>255){
		printf("enter number between 0 to 255");
		return 1;
	}
	int ones=countOnes((unsigned char)n);
	printf("the number of 1's in the byte:%d ",ones);
	
}

/*
//Brian Kernighan’s Algorithm.
int countOnes(unsigned char byte) {
    int count = 0;
    while (byte) {
        byte = byte & (byte - 1); // Clears the least significant 1 bit
        count++;
    }
    return count;
}
*/
int countOnes(unsigned char byte) {
    int count = 0;
    for (int i = 0; i < 8; i++) {
        if (byte & 1)  // Check if the least significant bit is 1
            count++;
        byte = byte >> 1; // Shift right by 1
    }
    return count;
}

