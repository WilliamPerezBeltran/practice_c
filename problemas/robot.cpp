#include <iostream>

using namespace std;

int main()
{
    int movimientos,x_robot=0,y_robot=0,angulo=0;
    char opcion;
    cout<<"cuantos movimientos quiere hacer para el robot: ";
    cin>>movimientos;
    for(int i=0;i<movimientos;i++){
        cout<<"precione la letra 'a' si quiere que el robot avance y precione 'g' si quiere que el robot gire 90° a la izquierda: ";
        cin>>opcion;
        if(opcion=='a'){
            if(angulo==0){
                x_robot+=2;
            }else if(angulo==90){
                y_robot+=2;
            }else if(angulo==180){
                x_robot-=2;
            }else if(angulo==270){
                y_robot-=2;
            }
            
        }else if(opcion=='g'){
            angulo+=90;
            if(angulo>270){
                angulo = 0;
            }
            
            
        }
    }
    cout<<"al terminar sus movimientos el robot quedo en la posicion: ("<<x_robot<<","<<y_robot<<")"<<endl;
}
