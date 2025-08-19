
#include <stdio.h>

int main()
{
    int n, digitalRoot;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0)
        digitalRoot = 0;
    else
    {
        digitalRoot = n % 9;
        if (digitalRoot == 0)
            digitalRoot = 9;
    }

    printf("Digital root: %d\n", digitalRoot);
    return 0;
}

