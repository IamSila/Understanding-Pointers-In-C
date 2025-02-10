#include <stdio.h>
#include "main.h"



/**
 * swap_int - swaps the value of a and b
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
    int x = *a;
    int y = *b;
    *a = &y;
    *b = &x; 

}
