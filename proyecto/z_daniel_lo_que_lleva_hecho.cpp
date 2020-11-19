#include <iostream>
using namespace std;

//estructuras utilizadas:
struct datos{
    string nombre;
    int cedula;
    int fila_silla;
    int columna_silla;
};

//------------------------------------------------------

//Funciones principales: 
void mostrarteatro(int fila, int columna, int cine_asientos[][10]);

void mostrarclientes(int numero_de_clientes_reserva,int numero_de_clientes_compra,datos num_clientes_reserva[50],datos num_clientes_compra[50]);

datos reserva(int fila,int columna,int cine_asientos[][10]);

int comprar(int fila,int columna,int cine_asientos[][10]);

void cancelarcompra();


//------------------------------------------------------

//funciones secundarias:
bool check_asiento(int fila_cliente,int columna_cliente,int cine_asientos[][10]);

//------------------------------------------------------

int main(){
    int cine_asientos[10][10],opcion,fila=10,columna=10;
    bool pivote=true;
    int numero_de_clientes_reserva=0,numero_de_clientes_compra=0;
    datos clientes_reservados;
    datos num_clientes_reserva[50];
    datos num_clientes_compra[50];

    for(int i=0;i<fila;i++){
        for(int j=0;j<columna;j++){
            if(pivote==true){
                cine_asientos[i][j]=1;
                pivote=false;   
            }else{
                cine_asientos[i][j]=0;
                pivote=true;
            }
            
        }
    }

    do{
        cout<<"Digite 1 para mostrar los asientos del teatro"<<endl;
        cout<<"Digite 2 para mostrar la lista de clientes"<<endl;
        cout<<"Digite 3 para reservar un asiento"<<endl;
        cout<<"Digite 4 para comprar una boleta"<<endl; 
        cout<<"Digite 5 si desea cancelar la compra de la boleta"<<endl;
        cout<<"Digite 6 si desea cerrar el programa"<<endl;
        cin>>opcion;

        switch (opcion){
        case 1:
            mostrarteatro(fila,columna,cine_asientos);
        break;
        
        case 2:
            mostrarclientes(numero_de_clientes_reserva,numero_de_clientes_compra,num_clientes_reserva,num_clientes_compra);
        break;
        
        case 3:
            num_clientes_reserva[numero_de_clientes_reserva]=reserva(fila,columna,cine_asientos);
            numero_de_clientes_reserva++;
            
            cout<<num_clientes_reserva[numero_de_clientes_reserva - 1].nombre;
        break;
        /*
        case 4:
            comprar(fila,columna,cine_asientos[][10]);
        break;
        case 5:
            cancelarcompra();
        break;
        case 6:
            cout<<"Gracias por utilizar el programa."<<endl;
        break;
        */
        default:
            cout<<"Esta no es una opcion valida, vuelva colocar una opcion."<<endl;
        }  
    }while(opcion!=6);
}

void mostrarteatro(int fila, int columna, int cine_asientos[][10]){
    cout<<"Asientos no disponibles= [0]"<<endl;
    cout<<"Asientos disponibles= [1]"<<endl;
    cout<<"Asientos reservados= [2]"<<endl;
    cout<<"Asientos comprados= [3]"<<endl;
    cout<<" "<<endl;
    cout<<"codicion actual del teatro: "<<endl;
    cout<<" "<<endl;

    cout<<"** "<<"|"<<" ";
    for(int j=0;j<columna;j++){
            cout<<"C"<<j<<"  ";
        }
    cout<<endl;
    for(int i=0;i<fila;i++){
        cout<<"F"<<i<<" | ";
        for(int j=0;j<columna;j++){
            cout<<"["<<cine_asientos[i][j]<<"] ";
        }
        cout<<" "<<endl;
    }
}

void mostrarclientes(int numero_de_clientes_reserva,int numero_de_clientes_compra,datos num_clientes_reserva[50],datos num_clientes_compra[50]){

    cout<<"los datos de los clientes que reservaron son: "<<endl;
    for(int j=0;j<numero_de_clientes_reserva;j++){
        cout<<"------------------------------------"<<endl;
        cout<<"nombre: "<<num_clientes_reserva[j].nombre<<" ";
        cout<<"cedula: "<<num_clientes_reserva[j].cedula<<" ";
        cout<<"numero de fila del asiento: "<<num_clientes_reserva[j].fila_silla<<" ";
        cout<<"numero de columna del asiento: "<<num_clientes_reserva[j].columna_silla;
        cout<<"------------------------------------"<<endl;
        cout<<"  "<<endl;   
    }

    /*cout<<"los datos de los clientes que compraron son: "<<endl;
    for(int j=0;j<numero_de_clientes_compra;j++){
        cou<<"------------------------------------"<<endl;
        cout<<"nombre: "<<num_clientes_compra[j].nombre<<" ";
        cout<<"cedula: "<<num_clientes_compra[j].cedula<<" ";
        cout<<"numero de fila del asiento: "<<num_clientes_compra[j].fila_silla<<" ";
        cout<<"numero de columna del asiento: "<<num_clientes_compra[j].columna_silla;
        cout<<"  "<<endl;   
    }
    */
}

datos reserva(int fila,int columna,int cine_asientos[][10]){
    bool ocupado;
    datos clientes_reservados;
    int fila_cliente,columna_cliente;
    
    cout<<"ingrese su nombre completo: ";
    cin>>clientes_reservados.nombre;
    cout<<"digite su cedula de identidad: ";
    cin>>clientes_reservados.cedula;
    do{

        mostrarteatro(fila,columna,cine_asientos);

        cout<<"En que fila quiere su asiento: ";
        cin>>clientes_reservados.fila_silla;
        fila_cliente = clientes_reservados.fila_silla;

        cout<<"En que columna quiere su asiento: ";
        cin>>clientes_reservados.columna_silla;
        columna_cliente = clientes_reservados.columna_silla;

        if(clientes_reservados.fila_silla>=fila || clientes_reservados.columna_silla>=columna){
            cout<<"esta silla no existe"<<endl;
        }
        ocupado=check_asiento(fila_cliente,columna_cliente,cine_asientos);
        if(ocupado==true){
            cout<<"este asiento ya fue comprado o reservado"<<endl;
        }
    }while(clientes_reservados.fila_silla>=fila || clientes_reservados.columna_silla>=columna || ocupado==true);
    cine_asientos[fila_cliente][columna_cliente]=2;
    return clientes_reservados;
    
}

bool check_asiento(int fila_cliente,int columna_cliente,int cine_asientos[10][10]){
    if (cine_asientos[fila_cliente][columna_cliente] != 0){
        return true;
    }else{
        return false;
    }
}