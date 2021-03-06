#include <stdio.h>
#include <math.h>

#define E_MIN 0.00001

double pol_taylor(double x){
	return M_E + ((x-1)*2*M_E) + ((x-1)*(x-1)*3*M_E);
}

double f(double x){
	return pow(M_E, x*x);
}

double intervalo_superior(){
    double x_i;
    for(x_i=1; fabs( f(x_i)-pol_taylor(x_i) )<=E_MIN; x_i+=(E_MIN/10) ){
        
    }
    return x_i;
}

double intervalo_inferior(){
    double x_i;
    for(x_i=1; fabs( f(x_i)-pol_taylor(x_i) )<=E_MIN; x_i-=(E_MIN/10) ){
        
    }
    return x_i;
}

int main(){
	printf("f(1) = %f; p(1) = %f;\nf(0) = %f; p(0) = %f\n", f(1), pol_taylor(1), f(0), pol_taylor(0));
	printf("intervalo superior menor que 10^-5: %f\n", intervalo_superior());
	printf("intervalo inferior maior que 10^-5: %f\n", intervalo_inferior());
}
