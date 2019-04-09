#include<iostream>
#include <cmath>
using namespace std;
void primos(int,int);
int main(){
  primos(3,15);
  return 0;
}
void primos(int numero1, int numero2){
  for(int j=numero1+1;j<numero2;j++){
  int contador=0;
  int a=0;
    for(int i=2; i<j; i++){
      a=j%i;
      if(a==0){
        contador=contador+1;
      }
    }
    if(contador==0){
      cout<<j<<endl;
    }
  }
}
