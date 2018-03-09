/*
 *  calculus.c
 *  
 *  Author: Fernando Schuindt.
 *  https://fschuindt.github.io/blog/about/
 *
 *  March 7th, 2018.
 */

#include <math.h>

static const float GOLDEN_N = 2.2360679775;

long double XOf(long int n)
{
	float numerator = GOLDEN_N + 1;
	return powl((numerator / 2), n);
}

long double YOf(long int n)
{
	float numerator = GOLDEN_N - 1;
	return powl((numerator / 2), n);
}

long double FibOf(long int n)
{
	return (XOf(n) - YOf(n)) / 2;
}
