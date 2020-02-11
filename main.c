#include <stdio.h>
#include "my_complex.h"


int main() {
	Complex a = {3, 4};
	Complex b = {5, 12};
	Complex (*fn_world[4])(Complex, Complex) = {complex_add, complex_sub, complex_mult, complex_div};
	double (*fn_world1[2])(Complex) = {magnitude, phase};
	
	int x; 
	
	for(x=0; x<4; x++) {
		
		world(fn_world[x], a , b);
	}


	for(x=0; x<2; x++) {

		Hat(fn_world1[x], a);
		
		Hat(fn_world1[x], b);
	}

	return 0;
}
