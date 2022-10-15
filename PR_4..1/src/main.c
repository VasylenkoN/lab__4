#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "function.h"


int main (int argc, char* argv[]) {
	int a, b, c;
	a = atoi(argv[5]);
	b = atoi(argv[7]);
	c = atoi(argv[9]);
	print_result(a, b, c);
	discriminant(a, b, c);
	return 0;
}
