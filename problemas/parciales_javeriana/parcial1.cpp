#include <iostream>

using namespace std;

void intercalar(int inicio, int factor, int tam);
#include <vector> 
int main()
{
    int inicio, factor, tam;
    cout<<"escriba el numero con el que empezara la pogresion: ";
    cin>>inicio;
    cout<<"escriba el factor para la progresion: ";
    cin>>factor;
    cout<<"cuantos numeros quieres que la progresion muestre: ";
    cin>>tam;
    

    intercalar(inicio, factor, tam);
    
}

void intercalar(int inicio, int factor, int tam){
    int inicio_1=inicio, inicio_2=inicio;
    int inter[tam*2]
    
    
    cout<<"el intercalado es: ";
    for(int i=0;i<tam;i++){
        inter[i]=inicio_1;
        inicio_1+=factor;
        inter[i+1]=inicio_2;
        inicio_2*=factor;
    }
    
}