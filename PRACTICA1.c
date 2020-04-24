/* Pazos Quezada Azarel 07/01/2020-12/01/2020 
PRACTICA 1 [bytes y valores]*/

#include <stdio.h>
#include <math.h>

int main (void){
	
	int byte, bits;
	long int limiteSupL, limiteInfL;
	unsigned long int limiteSupUL, limiteInfUL;
	double limiteSupF, limiteInfF;
	 
	
	byte = sizeof(char);
	bits=byte*8-1;
	limiteSupL=pow(2, bits)-1;
	limiteInfL=pow(2, bits)*(-1);
	
	printf("\n Caracter con signo:\n bytes: %d\n Rango: [%d, %d]", byte, limiteInfL, limiteSupL);
	
	byte = sizeof(unsigned char);
	bits=byte*8;
	limiteSupL=pow(2, bits)-1;
	limiteInfL=pow(2, bits)-pow(2, bits);
	
	printf("\n\n Caracter sin signo:\n bytes: %d\n Rango: [%d, %d]", byte, limiteInfL, limiteSupL);
	
	byte = sizeof(int);
	bits=byte*8-1;
	limiteSupL=pow(2, bits)-1;
	limiteInfL=pow(2, bits)*(-1);
	
	printf("\n\n Entero con signo:\n bytes: %d\n Rango: [%d, %d]", byte, limiteInfL, limiteSupL);
	
	byte = sizeof(unsigned int);
	bits=byte*8;
	limiteSupUL=pow(2, bits)-1;
	limiteInfUL=pow(2, bits)-pow(2, bits);
	
	printf("\n\n Entero sin signo:\n bytes: %d\n Rango: [%u, %u]", byte, limiteInfUL, limiteSupUL);
	
	byte = sizeof(short int);
	bits=byte*8-1;
	limiteSupL=pow(2, bits)-1;
	limiteInfL=pow(2, bits)*(-1);
	
	printf("\n\n Entero corto con signo:\n bytes: %d\n Rango: [%d, %d]", byte, limiteInfL, limiteSupL);
	
	byte = sizeof(unsigned short int);
	bits=byte*8;
	limiteSupUL=pow(2, bits)-1;
	limiteInfUL=pow(2, bits)-pow(2, bits);
	
	printf("\n\n Entero corto sin signo:\n bytes: %d\n Rango: [%u, %u]", byte, limiteInfUL, limiteSupUL);
	
	byte = sizeof(long int);
	bits=byte*8-1;
	limiteSupL=pow(2, bits)-1;
	limiteInfL=pow(2, bits);
	
	printf("\n\n Entero largo con signo:\n bytes: %d\n Rango: [%d, %d]", byte, limiteInfL, limiteSupL);
	
	byte = sizeof(unsigned long int);
	bits=byte*8;
	limiteSupUL=pow(2, bits)-1;
	limiteInfUL=pow(2, bits)-pow(2, bits);
	
	printf("\n\n Entero largo sin signo:\n bytes: %d\n Rango: [%u, %u]", byte, limiteInfUL, limiteSupUL);
	
	byte = sizeof(float);
	bits=byte*8;
	limiteSupF=pow(2, bits);
	limiteInfF=pow(2, bits)*(-1);
	
	printf("\n\n Real :\n bytes: %d\n Rango: [%e, %e]", byte, limiteInfF, limiteSupF);
	
	byte = sizeof(double);
	bits=byte*8;
	limiteSupF=pow(2, bits);
	limiteInfF=pow(2, bits)*(-1);
	
	printf("\n\n Real doble :\n bytes: %d\n Rango: [%e, %e]", byte, limiteInfF, limiteSupF);
	
	byte = sizeof(long double);
	bits=byte*8;
	limiteSupF=pow(2, bits);
	limiteInfF=pow(2, bits)*(-1);
	
	printf("\n\n Real doble largo :\n bytes: %d\n Rango: [%e, %e]", byte, limiteInfF, limiteSupF);
	
	getch();
	return 0;
}
