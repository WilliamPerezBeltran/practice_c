#include<iostream>
using namespace std;
int main(){
  int poblacion_a, poblacion_b, meses=0;
  double crecimiento_a, crecimiento_b, cre_menor_a, cre_menor_b, incremento_a, incremento_b;
  do{
    cout<<"cual es la cantidad de la poblacion a: ";
    cin>>poblacion_a;
    cout<<"cual es el porcentaje de crecimiento de la poblacion a: ";
    cin>>crecimiento_a;
    cout<<"cual es la cantidad de la poblacion b: ";
    cin>>poblacion_b;
    cout<<"cual es el porcentaje de crecimiento de la poblacion b: ";
    cin>>crecimiento_b; 
  }while(poblacion_a>=poblacion_b || crecimiento_b>=crecimiento_a);

  while(poblacion_a<=poblacion_b){
    incremento_a=poblacion_a*(crecimiento_a/100);
    incremento_b=poblacion_b*(crecimiento_b/100);
    poblacion_a=poblacion_a+incremento_a;
    poblacion_b=poblacion_b+incremento_b;
    cout << " - "<<poblacion_a<<" - "<< poblacion_b<<endl;
    if(poblacion_a>=20000){
        cre_menor_a=(crecimiento_a/100)/2;
        incremento_a=poblacion_a*(cre_menor_a);
        poblacion_a=poblacion_a+incremento_a;
    }
    if(poblacion_b>=20000){
        cre_menor_b=(crecimiento_b/100)/2;
        incremento_b=poblacion_b*(cre_menor_b);
        poblacion_b=poblacion_b+incremento_b;
    }
    meses+=1;
  }
  cout<<"poblacion a: "<<poblacion_a<<endl;
  cout<<"poblacion b: "<<poblacion_b<<endl;
  cout<<"esto sucede dentro de: "<<meses<<" meses"<<endl;
  

}