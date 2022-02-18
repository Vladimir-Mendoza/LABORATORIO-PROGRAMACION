#include<iostream>
#include<cmath>

using namespace std;

int main (){
	
	double a, b, c;
	double D, x1, x2, xR, xI;
	
	cout.precision (3);
	cout<<"					ECUACION DE SEGUNDO GRADO "<<endl;
	cout<<"						ETN - 307L"<<endl;
	
	cout<<"Ingrese un valor para a(x2) = "; cin>>a;
	cout<<"Ingrese un valor para b(x) = "; cin>>b;
	cout<<"Ingrese un valor para c = "; cin>>c;
	
	D = (b*b)-(4*a*c);
	
	if(D>0){
		
		x1 = (-b + sqrt(D))/(2*a);
		x2 = (-b - sqrt(D))/(2*a);
		
		cout<<"\nLas raices son :"<<endl;
		cout<<"x1 ="<<x1<<endl;
		cout<<"x2 ="<<x2<<endl;
	}
	
	else if(D<0){
		
		xR = (-b /(2*a));
		xI = (sqrt(-D))/(2*a);
		
		cout<<"\nLas raices complejas son :"<<endl;
		cout<<xR<<"+/-"<<xI<<"i"<<endl;	
	}
	
	else {
		x1 = -b/(2*a);
		
		cout<<"\nLas raices son iguales ="<<x1<<endl;
	}
	
	return 0;
}
