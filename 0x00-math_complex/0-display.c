#include "holberton.h"
#include <stdio.h>
/**
 * display_complex_number - function that displays the complex numbers
 * @c: c
 * Return: Always 0.
 */
void display_complex_number(complex c)
{
	if (c.re == 0)
		printf("%.6gi\n", c.im);

	if (c.im < 0)
		printf("%.6g - %.6gi\n", c.re, c.im * -1);

	else if (c.im > 0)
		printf("%.6g + %.6gi\n", c.re, c.im);

	else if (c.im == 0)
		printf("%.6g\n", c.re);

}
