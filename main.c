#include <stdio.h>
#include "my_complex.h"


int main() {
	Complex a = {3, 4};
	Complex b = {5, 12};
	Complex (*spell[4])(Complex, Complex) = {complex_add, complex_sub, complex_mult, complex_div};
	double (*wizard[2])(double, double) = {magnitude, phase};
	return 0;
}
