#include <iostream>

using namespace std;

void suma();
void resta();
void multi();
void division();

int main()
{
    int opcion;
    cout<<"digite un 1 para sumar"<<endl;
    cout<<"digite un 2 para restar"<<endl;
    cout<<"digite un 3 para multiplicar"<<endl;
    cout<<"digite un 4 para dividir"<<endl;
    cout<<"digite su opcion: ";
    cin>>opcion;
    switch(opcion){
    case 1:   
        suma();
        break;
    
    case 2:
        resta();
        break;
    
    case 3:
        multi();
        break;
    
    case 4:
        division();
        break;
    }

}
void suma(){
    int x,y;
    cout<<"digite el primer valor: ";
    cin>>x;
    cout<<" digite el segundo valor: ";
    cin>>y;
    cout<<"la suma de los dos valores es: "<<x+y<<endl;
}
void resta(){
    int x,y;
    cout<<"digite el primer valor: ";
    cin>>x;
    cout<<" digite el segundo valor: ";
    cin>>y;
    cout<<"la resta de los dos valores es: "<<x-y<<endl;
}
void multi(){
    int x,y;
    cout<<"digite el primer valor: ";
    cin>>x;
    cout<<" digite el segundo valor: ";
    cin>>y;
    cout<<"la multiplicacion de los dos valores es: "<<x*y<<endl;
}
void division(){
    int x,y;
    cout<<"digite el primer valor: ";
    cin>>x;
    cout<<" digite el segundo valor: ";
    cin>>y;
    cout<<"la division de los dos valores es: "<<x/y<<endl;
}