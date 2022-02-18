#include<iostream>
#include <conio.h>
#include <math.h>

using namespace std;

double rcu (double E) { 

double raiz;
if (E> 0) { 
raiz = exp(log(E)/3);
};
if (E== 0){ 
raiz = 0;
};
if (E<0) {
raiz =-exp(log(-E)/3); 
};
return raiz;
};

int main(){
double A,B,C,D; 
double a1,b1,c1;
double p,q,dis; 
double u,v;
double x,y,z; 
double pi,t; 

cout.precision (3);

cout<<" 						ECUACION DE TERCER GRADO"<<endl;
cout<<"													ETN - 307L"<<endl;
cout<<" Digite "<<endl;
cout<<" A(X3) ="; cin>> A;
cout<<" B(X2) ="; cin>> B;
cout<<" C(X)  ="; cin>> C;
cout<<" D     ="; cin>> D;

cout.precision(3); 
t = 0; 
pi = 3.141592654; 
a1 = B/A;
b1 = C/A;
c1 = D/A;
p = b1 - (a1*a1)/3; 
q = (2*a1*a1*a1)/27 - (a1*b1)/3 + c1; 
dis = (q*q) + (4*p*p*p)/27; 

if ( dis >= t ) { 
u = rcu(0.5*(-q + sqrt(dis))); 
v = rcu(-0.5*(q + sqrt(dis))); 
x = u + v -(a1/3);
y = (-0.5)*(u+v) -(a1/3);
z = (0.5)*sqrt(3)*(u-v);
cout<<" La ecuacion tiene una raiz real y 2 complejas "<<endl;
cout<<" X1 :"<<x<<endl;
cout<<" X2 :"<<y<<" + "<<fabs(z)<<"i"<<endl;
cout<<" X3 :"<<y<<" - "<<fabs(z)<<"i"<<endl;
};


if ((dis < t and dis > -t) and (p>=-t and p<=t)){ 
cout<<" La ecuacion tiene una sola raiz"<<endl;
cout<<" X :"<<-(a1/3);
};


if ((dis < t and dis > -t) and (p>=t or p<=-t)){ 
u = rcu(-0.5*q); 
x = 2*u -(a1/3);
y = -u -(a1/3);
cout<<" La ecuacion tiene raices multiples"<<endl;
cout<<" X1 :"<<x<<endl;
cout<<" X2=X3 :"<<y<<endl;
};


if ( dis <= -t ) { 
x = (2*sqrt(-p/3))*cos(acos((-q/2)*sqrt(-27/(p*p*p)))/3) -(a1/3);
y = (2*sqrt(-p/3))*cos(acos((-q/2)*sqrt((-27)/(p*p*p)))/3 +2*pi/3) -(a1/3);
z = (2*sqrt(-p/3))*cos(acos((-q/2)*sqrt((-27)/(p*p*p)))/3 +4*pi/3) -(a1/3);
cout<<" La ecuacion tiene 3 raices distintas "<<endl;
cout<<" X1 :"<<x<<endl;
cout<<" X2 :"<<y<<endl;
cout<<" X3 :"<<z<<endl;
};

getch(); 

return 0;
} 
