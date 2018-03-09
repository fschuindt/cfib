/*
 *  calculus.c
 *  
 *  Author: Fernando Schuindt.
 *  https://fschuindt.github.io/blog/about/
 *
 *  March 7th, 2018.
 */

#include <math.h>

static const long double GOLDEN_N = 2.23606797749979;

long double XOf(int n)
{
	long double numerator = GOLDEN_N + 1;
	return powl((numerator / 2), n);
}

long double YOf(int n)
{
	long double numerator = GOLDEN_N - 1;
	return powl((numerator / 2), n);
}

long double FibOf(int n)
{
	return (XOf(n) - YOf(n)) / GOLDEN_N;
}
