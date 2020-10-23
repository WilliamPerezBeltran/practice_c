

#include <iostream>
using namespace std;
int main(){
    int tamano_matriz = 2;

    int matriz[tamano_matriz][tamano_matriz];
    int diagonal=1,diagonal_inversa=1,determinante;

    for (int i = 0; i < 2; ++i){
        for (int j = 0; j < 2; ++j){
            cout<< "deme el valor en la positicion ["<< i<<"]["<<j<<"] = ";
            cin>>matriz[i][j];
        }
    }

  

    determinante = matriz[0][0] * matriz[1][1] - (matriz[1][0]*matriz[0][1]);



    cout<< "determinante= "<< determinante<<endl;




} 
