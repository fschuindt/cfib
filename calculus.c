/*
 *  calculus.c
 *  
 *  Author: Fernando Schuindt.
 *  https://fschuindt.github.io/blog/about/
 *
 *  March 7th, 2018.
 */

#include <math.h>

static const float GOLDEN_N = 2.23606797749979;

float XOf(int n)
{
	float numerator = GOLDEN_N + 1;
	return powl((numerator / 2), n);
}

float YOf(int n)
{
	float numerator = GOLDEN_N - 1;
	return powl((numerator / 2), n);
}

float FibOf(int n)
{
	return (XOf(n) - YOf(n)) / 2;
}
