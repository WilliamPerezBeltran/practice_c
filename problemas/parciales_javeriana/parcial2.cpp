#include <iostream>

using namespace std;

void pro_aritmetica(int inicio, int factor, int tam);
void pro_geometrica(int inicio, int factor, int tam);
void intercalar(int inicio, int factor, int tam);
int main()
{
    int inicio, factor, tam;
    cout<<"escriba el numero con el que empezara la pogresion: ";
    cin>>inicio;
    cout<<"escriba el factor para la progresion: ";
    cin>>factor;
    cout<<"cuantos numeros quieres que la progresion muestre: ";
    cin>>tam;
    
    pro_aritmetica(inicio,factor,tam);
    pro_geometrica(inicio,factor,tam);
    intercalar(inicio, factor, tam);
    
}

void pro_aritmetica(int inicio, int factor, int tam){
    cout<<"la progresion aritmetica es: ";
    for(int i=0;i<tam;i++){
        cout<<inicio<<", ";
        inicio+=factor;
    }
}
    
void pro_geometrica(int inicio, int factor, int tam){
    cout<<"la progresion geometrica es: ";
    for(int i=0;i<tam;i++){
        cout<<inicio<<", ";
        inicio*=factor;
        
        
    }
}

void intercalar(int inicio, int factor, int tam){
    int inicio_1=inicio, inicio_2=inicio;
    int inter[tam*2];
    
    
    cout<<"el intercalado es: ";
    for(int i=0;i<tam;i++){
        inter[i]=inicio_1;
        inter[i+1]=inicio_2;
        cout<<inter[i]<<",";
        cout<<inter[i+1]<<",";
        inicio_1+=factor;
        inicio_2*=factor;
    }
    
}