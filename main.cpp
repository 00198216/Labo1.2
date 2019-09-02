#include <iostream>
#include "cmath"

using namespace std;

float cuadrado(int n,float r){

     float Result=((n/r)+r)/2;

    if(abs(r-Result)<0.001){
        return Result;
    }
    else{
      return cuadrado(n,Result);

    }
}

int main() {
    int n;
    int r=1;
    cout<<"Ingrese un n"<<endl;
    cin>>n;

    cout<<"La raiz cuadrada de N es: "<<endl;
    cout<<cuadrado(n,r)<<endl;


    return 0;
}