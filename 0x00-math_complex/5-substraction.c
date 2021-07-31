#include "holberton.h"
#include <stdio.h>
/**
 * substraction - check the code for Holberton School students.
 * @c1: c1
 * @c2: c2
 * @c3: c3
 * Return: Always 0.
 */
void substraction(complex c1, complex c2, complex *c3)
{
	c3->re = c1.re - c2.re;
	c3->im = c1.im - c2.im;
}
