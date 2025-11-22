#include <stdio.h>
#include <stdlib.h>


/**
 * main - check the code
 * Return: 0
 */

int main(void) {
	/**
	 * dynamic memory management
	 */
	int *pi = (int *) malloc(sizeof(int));
	*pi = 5;
	printf("The value of pi is: %d", *pi);
	free(pi);
	return(0)
}
