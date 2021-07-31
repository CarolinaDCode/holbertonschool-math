#include <stdio.h>
#include <math.h>
#include "holberton.h"
/**
 * modulus - function that returns the modulus of a given complex number
 * @c: c
 *
 * Return: double
 */
double modulus(complex c)
{
	double modulo;

	modulo = sqrt(pow(c.re, 2)+pow(c.im, 2));

	return (modulo);
}
