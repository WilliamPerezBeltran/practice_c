#include <iostream>
#include <math.h>

using namespace std;

void resultado_ecuacion(int a, int b, int c, int x);
void simetria(int a, int b, int c, int x);
void vertice(int a, int b, int c, int x);

int main(){
    int a,b,c,x;
    cout<<"deme el valor 'a' para la ecuacion: ";
    cin>>a;
    cout<<"deme el valor 'b' para la ecuacion: ";
    cin>>b;
    cout<<"deme el valor 'c' para la ecuacion: ";
    cin>>c;
    
    // x=(-b+ sqrt(b*b- 4*a*c))/2*a;
    
     resultado_ecuacion(a,b,c,x);
     simetria(a,b,c,x);
     vertice(a,b,c,x);
}

void resultado_ecuacion(int a,int b,int c,int x){
    cout<<"el resultado de la ecuacion cuadratica es:"<<a**x+b*x+c<<endl;
}
void simetria(int a,int b,int c,int x){
    cout<<"el eje de simetria es: "<<x<<endl;
}
void vertice(int a,int b,int c,int x){
    cout<<"el vertice se encuentra en la posicion: ("<<x<<","<<a**x+b*x+c<<")"<<endl; 
}



