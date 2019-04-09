#include<iostream>
#include <cmath>
using namespace std;
void mul(int array1[5],int array2[5]){
  int resp[5];
  for(int i=0; i<5;i++){
    resp[i]=array1[i]*array2[i];
    cout<<resp[i]<<endl;
  }

}
void punto(int array1[5],int array2[5]){
  int a=0;
  for(int i=0; i<5;i++){
    a+=array1[i]*array2[i];
  }
  int aaa[1]={a};
  cout<<"El resultado del producto punto es: "<<" "<<aaa[0];
}
int main(){
  int a[5]={1,2,3,4,5};
  int b[5]={1,2,3,4,5};
  mul(a,b);
  punto(a,b);
  return 0;
}
