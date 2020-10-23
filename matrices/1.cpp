#include <iostream>

using namespace std;


int main(){
   int edades[3][2] = {{1,2},{9,8},{14,21}};
    int filas = (sizeof(edades)/sizeof(edades[0]));
    cout<<"sizeof"<<endl;
    cout<<"1) Yields the size in bytes of the object representation of type."<<endl;
    cout<<"sizeof(edades)"<<endl;
    cout<<sizeof(edades)<<endl;
    cout<<"sizeof(edades[0])"<<endl;
    cout<<sizeof(edades[0])<<endl;
    cout<<"filas"<<endl;
    cout<<filas<<endl;
    int columnas = (sizeof(edades[0])/sizeof(edades[0][0]));
    cout<<"columnas"<<endl;
    cout<<columnas<<endl;
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout<<edades[i][j]<<endl;
        }
    }
}

