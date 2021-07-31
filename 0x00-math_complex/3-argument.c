#include <stdio.h>
#include <math.h>
#include "holberton.h"
/**
 * argument - function that returns the argument of a given complex number
 * @c: c
 * Return: double
 */
double argument(complex c)
{
	double arg = atan(c.im / c.re);
	return (arg);
}
