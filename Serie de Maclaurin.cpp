#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

float pot(float n, int p);
int fac(int n);

int main(int argc, char * argv[]){
	float x, seno = 0;
	int n, constante1 = 1, constante2 = 1;
	
	cout<<"					SENO DE UN ANGULO POR MACLAURIN"<<endl;
	cout<<"						   ETN - 307L"<<endl;
	printf("\n\nDigite el angulo en Radianes ="); scanf("%f", &x);
	printf("\n\nDigite la cantidad de elementos en la serie(n) ="); scanf("%d", &n);
	
	for (constante1 = 1;constante1 <= n;++constante1){
		
		seno = seno+pot(-1, constante1 + 1)*pot(x, constante2)/fac(constante2);
		constante2 = constante2 + 2;	
	}
	
	printf("\n\nEl valor de sen(%0.2f) = %f", x, seno);
	
	return 0 ;
}

float pot(float b, int p) {
	
	int k;
	float res=1;
	for(k=1; k<=p; ++k) {
		
		res = res * b;
	}
	return (res);
}

int fac(int n) {
	
	int k, f = 1;
	for(k=1; k<=n; ++k) {
		
		f = f * k;
	}
	return (f);
}


