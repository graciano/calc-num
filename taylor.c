#include <stdio.h>
#include <math.h>

double pol_taylor(double x){
	return M_E + ((x-1)*2*M_E) + ((x-1)*(x-1)*3*M_E);
}

double f(double x){
	return pow(M_E, x*x);
}

int main(){
	printf("f(1) = %f; p(1) = %f;\nf(0) = %f; p(0) = %f\n", f(1), pol_taylor(1), f(0), pol_taylor(0));
}
