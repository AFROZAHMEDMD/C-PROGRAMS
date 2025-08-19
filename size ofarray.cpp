#include <stdio.h>

int main() {
    double a[5];

    printf("Total size of array a: %d bytes\n", sizeof(a));
    printf("Size of each element (double): %d bytes\n", sizeof(a[0]));

    return 0;
}

