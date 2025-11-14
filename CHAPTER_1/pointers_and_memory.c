#include <stdio.h>

/**
 * main - check all the code
 * Return: Always 0
 */

int main(void) {
	// getting the character from an array using pointer method
	char *names[] = {"Miller", "Sila", "Kenya"};
	printf("%c",*(*(names + 1) + 1));
	//method 2
	printf("%c", names[1][2]);
	return (0);
}
