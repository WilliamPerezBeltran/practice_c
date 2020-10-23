#include <iostream>

using namespace std;


int main(){
  int matriz[2][3][3];
  int suma[3][3];
  int m, fila, columna;

  for(m=0;m<2;m++){
    for(fila=0;fila<3;fila++){
      for (columna = 0; columna < 3; ++columna){
        cout<< "para la matriz "<< m+1 <<endl;
        cout<< "deme el valor en la positicion ["<< fila<<"]["<<columna<<"] = ";
        cin>>matriz[m][fila][columna];

      }
    }

  }



  for(m=0;m<2;m++){
     cout<<"mattriz"<< m +1<<endl;
    for(fila=0;fila<3;fila++){
      for (columna = 0; columna < 3; ++columna)
        cout<<matriz[m][fila][columna]<<" ";
        cout<<endl;

      
    }

  }
  cout<< "suma de las matrices "<< m+1 <<endl;
  for(fila=0;fila<3;fila++){
    for (columna = 0; columna < 3; ++columna){
      suma[fila][columna] = matriz[0][fila][columna]+matriz[1][fila][columna];
    }
  }

  for(fila=0;fila<3;fila++){
    for (columna = 0; columna < 3; ++columna)
      cout<<suma[fila][columna]<<" ";
        cout<<endl;
    
  }




}

