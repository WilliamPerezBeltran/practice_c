
#include <iostream>
 
using namespace std;
 
int main()
{
     int f=3,c=3,mayor=0;
     // int matriz[f][c];
     int matriz[3][3]={{2,5,1},{10,9,3},{0,8,7}};
     //lleno la matriz
    // for(int i=0; i<f; i++)
    // {
    //     for(int j=0; j<c; j++)
    //     {
    //          cout<<"introducir datos:";
    //          cin>>matriz[i][j];
    //     }
    // }
    //imprimo la matriz como se lleno
    cout<<"nLos Datos De La Matriz Fuero Introducidos Asi"<<endl;
    for(int i=0; i<f; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }
 
     //ordeno la matriz de mayor a menor
     for(int i=0; i<f; i++)
     {
        for(int j=0; j<c; j++)
        {
            for(int x=0; x<f;x++)
            {
                for(int y=0; y<c; y++)
                {
                    // if(matriz[i][j]>matriz[x][y])
                    if(matriz[i][j]<matriz[x][y])
                    {
                        mayor=matriz[i][j];
                        matriz[i][j]=matriz[x][y];
                        matriz[x][y]=mayor;
                    }
 
                }
            }
         }
    }
 
    //imprimo la matriz como ordenada
    cout<<"nLos Datos De La Matriz Fueron Ordenados de Mayor a Menor"<<endl;
    for(int i=0; i<f; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }
 
    return 0;
}

