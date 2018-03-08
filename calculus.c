/*
 *  calculus.c
 *  
 *  Author: Fernando Schuindt.
 *  https://fschuindt.github.io/blog/about/
 *
 *  March 7th, 2018.
 */

#include <math.h>

#define GOLDEN_N ( sqrt(5) )

long double XOf(long int n)
{
	return powl(((1 + GOLDEN_N) / 2), n);
}

long double YOf(long int n)
{
	return powl(((1 - GOLDEN_N) / 2), n);
}

long double FibOf(long int n)
{
	return (XOf(n) - YOf(n)) / 2;
}
