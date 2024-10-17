#include <bits/stdc++.h>
using namespace std;
int main() {

  //Se declaran las variables
  double a, b, c, Op1=0, X1=0, X2=0;
  //Se ingresaran los valores de a, b y c
  cout<<"Calcular raices con formula general"<<endl;
  cout<<"Valor de A: "<<endl;
  cin>>a;
  cout<<"Valor de B: "<<endl;
  cin>>b;
  cout<<"Valor de C: "<<endl;
  cin>>c;
  //Si algun valor es 0 no se podra calcular y mostrara un mensaje
  if(a==0 || b==0 || c==0)
  {
    cout<<"No se puede calcular, los valores no pueden ser 0"<<endl;
  }

  //Si ningun valor es 0 se podra calcular
  else {
  //Formula general
  Op1=sqrt(((b*b)-(4*a*c)));
  X1=(-b+Op1)/(2*a);
  X2=(-b-Op1)/(2*a);

  //Se imprimiran los valores de X1 y X2 a 4 decimales
  printf( "El valor de X1 es = %.4f\n", X1);
  printf( "El valor de X2 es = %.4f\n", X2);
  }
  return 0;
}