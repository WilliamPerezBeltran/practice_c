#include <iostream>
using namespace std;

struct datos{
	string nombre;
	int cedula;
	int fila_silla;
	int columna_silla;
};

bool check_asiento(int fila_cliente,int columna_cliente,int cine_asientos[2][2]);


int main(){
	datos num_clientes[5];
	int  numero_de_clientes=2, fila=2, columna=2;
	bool ocupado;
	int cine_asientos[2][2];
	int fila_cliente,columna_cliente;

	for(int i=0;i<fila;i++){
		for(int j=0;j<columna;j++){
			cine_asientos[i][j]=0;
		}
	}
	

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


bool check_asiento(int fila_cliente,int columna_cliente,int cine_asientos[2][2]){
	if (cine_asientos[fila_cliente][columna_cliente] != 0){
		return true;
	}else{
		return false;
	}
}