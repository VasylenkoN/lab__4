#ifndef FUNCTION_C
#define FUNCTION_C
#include <math.h>
#include <stdio.h>


void two_solutions(int a, int b, int c, int d) {
	float x1, x2, X;
	x1 = (sqrt((float)d) - (float)b) / ((float)2 * (float)a);
	x2 = ((float)-b - sqrt((float)d)) / (2 * (float)a);
	printf("\n  X1 = %f ", x1);
	printf("\n  X2 = %f ", x2);
}


void one_solution(int a, int b) {
	float x;
	x = -(float)b / 2 * (float)a;
	printf("\n  X = %f ", x);
}

void discriminant(int a, int b, int c) {
	int d;
	d = (b * b) - (4.0 * a * c);
	 
	if (d > 0.0) {
		two_solutions(a, b, c, d);
	} else if (d == 0.0) {
		one_solution(a, b);
	} else {
		printf("\n  No roots!!!");
		
	}

}
void print_result(int a, int b, int c) {
	printf("\n  (%d) * x^2 + (%d) * x + (%d) = 0", a, b, c);

}


#endif
