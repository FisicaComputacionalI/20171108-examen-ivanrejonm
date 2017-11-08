//programa3
#include<iostream>
using namespace std;
int main()
{
  float D;
  float T;
  float V;
  cout<<"Escriba la distancia recorrida en metros: "<<endl;
  cin>>D;
  cout<<"¿En cuańtos segundos se recorrió?"<<endl;
  cin>>T;
  V=D/T;
  cout<<"La velocidad es "<<V<<" metros sobre segundos"<<endl;
  return 0;
}
