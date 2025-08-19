#include <stdio.h>

int main()
{
    int array1[] = {10, 20, 30};
    int array2[4];  // one extra space

    array2[0] = 0;  // default or dummy value
    for (int i = 0; i < 3; i++) {
        array2[i + 1] = array1[i];
    }

    // Print all elements of array2
    printf("array2[]: ");
    for (int i = 0; i < 4; i++) {
        printf("%d ", array2[i]);
    }

    return 0;
}

