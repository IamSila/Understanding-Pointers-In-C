#include <stdio.h>
#include "main.h"

/**
 * main - the main program
 * return: is always 0
 */

int main(void)
{
    int n;

    n = 402;
    printf("n=%d\n", n);
    reset_to_98(&n);
    printf("n=%d\n", n);
    return (0);
}
