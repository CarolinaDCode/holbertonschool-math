#include "holberton.h"
#include <stdio.h>

/**
 * conjugate - function that returns the conjugate of a given complex number.
 * @c: c
 * Return: complex.
 */

complex conjugate(complex c)
{
	complex numI;

	numI.re = c.re;
	numI.im = c.im * -1;

	return (numI);
}
