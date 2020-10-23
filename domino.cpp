#include <iostream>

using namespace std;

int tumbar(int n,int altura[],int distancia[]);

int main()
{
    int n, valor_1, valor_2, caidos;
    cout<<"deme cuantas fichas se van a usar: ";
    cin>>n;
    int altura[n],distancia[n];
    for(int i=0;i<n;i++){
        cout<<"deme la altura de la "<<i+1<<" ficha: ";
        cin>>valor_1;
        altura[i]=valor_1;
        cout<<"deme la distancia de una ficha a la siguiente: ";
        cin>>valor_2;
        distancia[i]=valor_2;
    }
    caidos=tumbar(n,altura,distancia);
    cout<<"en total cayeron: "<<caidos<<" fichas de la fila"<<endl;
}

int tumbar(int n,int altura[],int distancia[]){
    int caidos;
    for(int j=0;j<n;j++){
        if(altura[j]>distancia[j+1]){
            caidos+=1;
        }
    }
    return caidos;
}


// 0 = 0
// 0 1 = 2
// 0 1 1 0 = 4 
// 0 1 1 0 1 0 0 1 = 8
// 0 1 1 0 1 0 0 1 1 0 0 1 0 1 1 0 = 16 
// 2**1 
// 2**2 
// 2**3 
// 2**4
// 2**n