#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * description - prints all single digit numbers of base 10 starting from 0
 * Return: Always 0
 */

int main(void)
{
	int d;

	for (d = '0'; <= '9'; d++)
	putchar(d);
	putchar('\n');

	return (0);
}

