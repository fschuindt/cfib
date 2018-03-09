/*
 *  CFib v0.0.1 UNSTABLE (see README.md).
 *  
 *  Author: Fernando Schuindt.
 *  https://fschuindt.github.io/blog/about/
 *
 *  March 7th, 2018.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "calculus.c"

int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		fprintf(stderr, "Missing term position.\n\nSee: cfib --help");
		exit(1);
	}

	if (strncmp(argv[1], "--help", 8) == 0)
	{
		printf("CFib v0.1.0\n\nUsage: cfib 8\n23.478714\n");
		exit(0);
	}

	int term = atoi(argv[1]);
	float evaluation = FibOf(term);

	printf("%.50f\n", evaluation);
	return 0;
}
