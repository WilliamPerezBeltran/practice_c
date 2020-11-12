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

void mostrarclientes();

int reserva(int fila,int columna,int cine_asientos[][10]);

int comprar(int fila,int columna,int cine_asientos[][10]);

void cancelarcompra();
//------------------------------------------------------

//funciones secundarias:
bool check_asiento(int fila_cliente,int columna_cliente,int cine_asientos[10][10]);

//------------------------------------------------------

int main(){
	int cine_asientos[10][10],opcion,fila=10,columna=10;

	for(int i=0;i<fila;i++){
        for(int j=0;j<columna;j++){
            cine_asientos[i][j]=0;
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
    		mostrarteatro(fila, columna,cine_asientos);
    	break;
    	case 2:
    		mostrarclientes();
    	break;
		case 3:
    		reserva(fila,columna,cine_asientos); 
    	break;
    	case 4:
    		comprar(fila,columna,cine_asientos[][10]);
    	break;
    	case 5:
    		cancelarcompra();
    	break;
    	case 6:
    		cout<<"Gracias por utilizar el programa."<<endl;
    	break;
    	default:
    		cout<<"Esta no es una opcion valida, vuelva colocar una opcion."<<endl;
		}  
	}while(opcion!=6);
}

void mostrarteatro(int fila, int columna, int cine_asientos[][10]){
	cout<<”Asientos disponibles= [0]”<<endl;
	cout<<”Asientos reservados= [1]”<<endl;
	cout<<”Asientos comprados= [2]”<<endl;
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

void mostrarclientes(){
	datos num_clientes_compra[20];
	datos num_clientes_reserva[20];
	cout<<"los datos de los clientes que compraron son: "<<endl;
	for(int j=0;j<numero_de_clientes_compra;j++){
        cout<<num_clientes_compra[j].nombre<<" ";
        cout<<num_clientes_compra[j].cedula<<" ";
    	cout<<num_clientes_compra[j].fila_silla<<" ";
        cout<<num_clientes_compra[j].columna_silla;
        cout<<"  "<<endl;	
   	}
   	cout<<"--------------------------------"<<endl;
   	cout<<" "<<endl;
    cout<<"los datos de los clientes que reservaron son: "<<endl;
    for(int j=0;j<numero_de_clientes_reserva;j++){
        cout<<num_clientes_reserva[j].nombre<<" ";
        cout<<num_clientes_reserva[j].cedula<<" ";
    	cout<<num_clientes_reserva[j].fila_silla<<" ";
        cout<<num_clientes_reserva[j].columna_silla;
        cout<<"  "<<endl;	
   	}

}

int reserva(int fila,int columna,int cine_asientos[][10]){
	datos num_clientes_reserva[20];
	int  numero_de_clientes=2, fila=2, columna=2;
	bool ocupado;
	int cine_asientos[2][2];
	int fila_cliente,columna_cliente;

	for(int i=0;i<numero_de_clientes;i++){
		cout<<"ingrese su nombre completo: ";
		cin>>num_clientes[i].nombre;
		cout<<"digite su cedula de identidad: ";
		cin>>num_clientes[i].cedula;
		do{
			cout<<"En que fila quiere su asiento: ";
			cin>>num_clientes[i].fila_silla;
			fila_cliente = num_clientes[i].fila_silla;

			cout<<"En que columna quiere su asiento: ";
			cin>>num_clientes[i].columna_silla;
			columna_cliente = num_clientes[i].columna_silla;

			if(num_clientes[i].fila_silla>=fila || num_clientes[i].columna_silla>=columna){
				cout<<"esta silla no existe"<<endl;
			}
		    ocupado=check_asiento(fila_cliente,columna_cliente,cine_asientos);
		    if(ocupado==true){
		    	cout<<"este asiento ya fue comprado o reservado"<<endl;
		    }
		}while(num_clientes[i].fila_silla>=fila || num_clientes[i].columna_silla>=columna || ocupado==true);
		cine_asientos[num_clientes[i].fila_silla][num_clientes[i].columna_silla]=2;
		cout<<"datos aceptados"<<endl;
		cout<<"  "<<endl;
	}
}

int comprar(int fila,int columna,int cine_asientos[][10]){
	datos num_clientes_compra[20];
	int  numero_de_clientes=2, fila=2, columna=2;
	bool ocupado;
	int cine_asientos[2][2];
	int fila_cliente,columna_cliente;

	for(int i=0;i<numero_de_clientes;i++){
		cout<<"ingrese su nombre completo: ";
		cin>>num_clientes[i].nombre;
		cout<<"digite su cedula de identidad: ";
		cin>>num_clientes[i].cedula;
		do{
			cout<<"En que fila quiere su asiento: ";
			cin>>num_clientes[i].fila_silla;
			fila_cliente = num_clientes[i].fila_silla;

			cout<<"En que columna quiere su asiento: ";
			cin>>num_clientes[i].columna_silla;
			columna_cliente = num_clientes[i].columna_silla;

			if(num_clientes[i].fila_silla>=fila || num_clientes[i].columna_silla>=columna){
				cout<<"esta silla no existe"<<endl;
			}
		    ocupado=check_asiento(fila_cliente,columna_cliente,cine_asientos);
		    if(ocupado==true){
		    	cout<<"este asiento ya fue comprado o reservado"<<endl;
		    }
		}while(num_clientes[i].fila_silla>=fila || num_clientes[i].columna_silla>=columna || ocupado==true);
		cine_asientos[num_clientes[i].fila_silla][num_clientes[i].columna_silla]=1;
		cout<<"datos aceptados"<<endl;
		cout<<"  "<<endl;
	}
}

void cancelarcompra(){

}

//---------------------------------------------------------------------------------

bool check_asiento(int fila_cliente,int columna_cliente,int cine_asientos[10][10]){
	if (cine_asientos[fila_cliente][columna_cliente] != 0){
		return true;
	}else{
		return false;
	}
}