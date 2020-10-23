#include <iostream>

using namespace std;

int main(){
  int tam,dato;
  bool validar_dato;
  cout<<"deme tamaño: ";
  cin>>tam;
  int vector[tam], valor,size,variable;

  for(int i=0;i<tam;i++){
    cout<<"deme valores para el vector: "<<endl;
    cin>>dato;
    vector[i] = dato;
  }
  for(int i=0;i<tam;i++){
    size = 0;
    if (i == 0){
      variable = vector[i];
    }
    for(int i=0;i<variable;i++){
      size+=1;
      if(size==tam){
        size = 0;
      }
    }
    variable = vector[size];


  }
  
    cout<< "rta: "<<endl;
    cout<<variable<<endl;

}
