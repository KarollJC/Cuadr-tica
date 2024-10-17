#include <bits/stdc++.h>
using namespace std;
int main() {

  double a, b, c, Op1=0, X1=0, X2=0;
  cout<<"Calcular raices con formula general"<<endl;
  cout<<"Valor de A: "<<endl;
  cin>>a;
  cout<<"Valor de B: "<<endl;
  cin>>b;
  cout<<"Valor de C: "<<endl;
  cin>>c;
  if(a==0 || b==0 || c==0)
  {
    cout<<"No se puede calcular, los valores no pueden ser 0"<<endl;
  }

  else {
  Op1=sqrt(((b*b)-(4*a*c)));
  X1=(-b+Op1)/(2*a);
  X2=(-b-Op1)/(2*a);

  printf( "El valor de X1 es = %.4f\n", X1);
  printf( "El valor de X2 es = %.4f\n", X2);
  }
  return 0;
}
