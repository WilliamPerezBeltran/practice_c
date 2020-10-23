#include <iostream>
using namespace std;
int main(){

    int matriz[2][2];
    int trans[2][2];

    for (int i = 0; i < 2; ++i){
        for (int j = 0; j < 2; ++j){
            cout<< "deme el valor en la positicion ["<< i<<"]["<<j<<"] = ";
            cin>>matriz[i][j];
        }
    }
    for (int i = 0; i < 2; ++i){
        for (int j = 0; j < 2; ++j){
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }

        cout<<endl;
    for (int i = 0; i < 2; ++i){
        for (int j = 0; j < 2; ++j){
            trans[j][i] = matriz[i][j];
        }
    }

    for (int i = 0; i < 2; ++i){
        for (int j = 0; j < 2; ++j){
            cout<<trans[i][j]<<" ";
        }
        cout<<endl;
    }




} 

