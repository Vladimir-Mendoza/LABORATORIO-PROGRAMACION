#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
 
using namespace std;

double factorial (int n) ;
double Funcion (int n, int x) ;

int main() {
	int n, x;
	
    cout<<"                                              SERIE DE TAYLOR PARA [f(x) = e^x)]"<<endl;
    cout<<"												ETN - 307"<<endl;
    
    cout<< "Valor de n ="; cin >> n;
    cout<< "Valor de x ="; cin >> x;
    printf("El resultado para n = %d, x = %d es = %f\n\n", n, x, Funcion(n, x)) ;
    system("pause") ;
}
 
 double Funcion (int n, int x) {
 	double a, s = 0;
 	for(int b = 0; b < n; b ++) {
 		a = pow(x, b) / factorial (b) ;
 		s += a;
	 }
 	return s;
 }
 
 double factorial (int n) {
 	double fac = 1;
 	for(int b = 2; b <= n; b ++) {
 		fac *= b;
	 }
 	return fac;
 }
 
 

