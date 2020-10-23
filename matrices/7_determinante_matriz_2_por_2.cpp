

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

    for (int i = 0; i < 2; ++i){
        for (int j = 0; j < 2; ++j){
            if (i == j){
                diagonal*=matriz[i][j];
            }

            if (i+j==tamano_matriz-1){
                diagonal_inversa+=matriz[i][j];
            }
        }
    }

    determinante = diagonal - (diagonal_inversa);



    cout<< "diagonal= "<< diagonal<<endl;
    cout<< "diagonal_inversa= "<< diagonal_inversa<<endl;
    cout<< "determinante= "<< determinante<<endl;




} 
