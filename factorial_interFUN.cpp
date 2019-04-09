#include<iostream>
#include <cmath>
using namespace std;
int factorial(int n){
  int a=0;
  if(n==0){
    a=1;
  }
  a=1;
  for(int i=1;i<=n;i++){
    a*=i;
  }
  return a;
}
int main(){
  int entrada;
  cout<<"Entre el numero: ";
  cin>>entrada;
  cout<<"El resultado del facotorial es: "<<factorial(entrada)<<""<<endl;
  return 0;
}
