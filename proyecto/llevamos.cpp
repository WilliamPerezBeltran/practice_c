#include <iostream>
using namespace std;

struct datos{
	string nombre;
	int cedula;
	int fila_silla;
	int columna_silla;
};

void cancelarcompra(int fila, int columna, int cine_asientos[][10],datos dato_clientes[50],int numero_de_reservas);
void mostrarteatro(int fila, int columna, int cine_asientos[][10]);
datos reserva(int fila, int columna, int cine_asientos[][10]);
bool check_asiento(int fila, int columna, int cine_asientos[][10]);
bool check_asiento_compra(int fila, int columna, int cine_asientos[][10]);


void check_cedula_verificar_asiento_cliente_compra(int fila, int columna , int cine_asientos[][10], datos struct_cliente,datos dato_clientes[50],int numero_de_reservas);




void mostrar_clientes(int numero_de_reservas, datos dato_clientes[50]);
datos comprar_boleta(int fila, int columna, int cine_asientos[][10], datos dato_clientes[50],int numero_de_reservas);

int main(){
	int cine_asientos[10][10], opcion, fila=10, columna=10;
	bool pivote=true;
	datos cliente_permitido;
	datos dato_clientes[50];
	int numero_de_reservas=0;
	int dato_clientes_size=0;

	for(int i=0;i<fila;i++){
        for(int j=0;j<columna;j++){
        	if (pivote==true){
	            cine_asientos[i][j]=1;
	            pivote=false;
        	}else{
	            cine_asientos[i][j]=0;
	            pivote=true;

        	}
        }
    }

	do{
		cout<<" "<<endl;
		cout<<"Digite 1 para mostrar los asientos del teatro"<<endl;
		cout<<"Digite 2 para mostrar la lista de clientes"<<endl;
		cout<<"Digite 3 para reservar un asiento"<<endl;
		cout<<"Digite 4 para comprar una boleta"<<endl; 
		cout<<"Digite 5 si desea cancelar la compra de la boleta"<<endl;
		cout<<"Digite 6 si desea cerrar el programa"<<endl;
		cout<<" "<<endl;
		cin>>opcion;

		cout<<" "<<endl;
		cout<<" "<<endl;

		system("clear");

		switch (opcion){
    	case 1:
    		mostrarteatro(fila, columna,cine_asientos);
    	break;
    	case 2:
    		if (numero_de_reservas != 0){
    			mostrar_clientes(numero_de_reservas, dato_clientes);
    		}else{
    			cout<<"Número de clientes: 0 "<<endl;
    			cout<<"No hay clientes para mostar"<<endl;

    		}
    	break;
		case 3:
			cliente_permitido = reserva(fila,columna,cine_asientos); 
			dato_clientes[numero_de_reservas]= cliente_permitido;
			numero_de_reservas++;
			cout<<" "<<endl;
			cout<<"- Datos ingresado al sistema: "<<endl;
			cout<< "   Nombre: "<<dato_clientes[numero_de_reservas-1].nombre<<endl;
			cout<< "   Cédula: "<<dato_clientes[numero_de_reservas-1].cedula<<endl;
			cout<< "   Fila: "<<dato_clientes[numero_de_reservas-1].fila_silla<<endl;
			cout<< "   Columna: "<<dato_clientes[numero_de_reservas-1].columna_silla<<endl;
			break;
    	break;
    	case 4:
    		comprar_boleta(fila,columna,cine_asientos,dato_clientes,numero_de_reservas);
    	break;
    	case 5:
    		 cancelarcompra(fila, columna, cine_asientos, dato_clientes,numero_de_reservas);
    	break;
  //   	case 6:
  //   		cout<<"Gracias por utilizar el programa."<<endl;
  //   	break;
    	default:
    		cout<<"Esta no es una opcion valida, vuelva colocar una opcion."<<endl;
		}  
	}while(opcion!=6);
}

void mostrarteatro(int fila, int columna, int cine_asientos[][10]){
	cout<<"Asientos no disponibles= 0"<<endl;
	cout<<"Asientos disponibles= 1"<<endl;
	cout<<"Asientos reservados=2"<<endl;
	cout<<"Asientos comprados= 3"<<endl;
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
            cout<<" "<<cine_asientos[i][j]<<"  ";
        }
        cout<<" "<<endl;
    }
	
	cout<<" "<<endl;

	cout<<"========================"<<endl;

	cout<<"** "<<"|"<<"  ";
    for(int j=0;j<columna;j++){
            cout<<"C"<<j<<"    ";
        }
    cout<<endl;
	for(int i=0;i<fila;i++){
	    cout<<"F"<<i<<" | ";
        for(int j=0;j<columna;j++){
            cout<<"["<<i<<","<<j<<"] ";
        }
        cout<<" "<<endl;
    }
}


datos comprar_boleta(int fila, int columna, int cine_asientos[][10],datos dato_clientes[50],int numero_de_reservas){
	datos nuevo_cliente;
	bool permitido;
	bool permitir_cliente_compra ;
	int fila_cliente,columna_cliente,cedula_cliente;
	
	cout<<"====Modulo: Comprar boleta===="<<endl;

	cout<<"ingrese su nombre completo: ";
	cin>>nuevo_cliente.nombre;
	cout<<"digite su cedula de identidad: ";
	cin>>nuevo_cliente.cedula;

	do{
		cout<<"En que fila quiere su asiento: ";
		cin>>nuevo_cliente.fila_silla;
		fila_cliente = nuevo_cliente.fila_silla;

		cout<<"En que columna quiere su asiento: ";
		cin>>nuevo_cliente.columna_silla;
		columna_cliente = nuevo_cliente.columna_silla;
		cedula_cliente = nuevo_cliente.cedula;

		if(nuevo_cliente.fila_silla>=fila || nuevo_cliente.columna_silla>=columna){
			cout<<endl;
			cout<<"esta silla no existe"<<endl;
			cout<<endl;
		}
		permitido=check_asiento_compra(fila_cliente,columna_cliente,cine_asientos);
		if (permitido == true){
			cout<<"Se le permite hacer la compra en la posicion: " <<fila_cliente<<","<<columna_cliente<<endl;

		}else{
			

		}

	// }while(nuevo_cliente.fila_silla>=fila || nuevo_cliente.columna_silla>=columna);
	}while(nuevo_cliente.fila_silla>=fila || nuevo_cliente.columna_silla>=columna );
	// }while(nuevo_cliente.fila_silla>=fila || nuevo_cliente.columna_silla>=columna || permitido==false);
	if (permitido == true){
		cine_asientos[fila_cliente][columna_cliente] = 3;
		
	}else{
		cout<<"No se le permite hacer la compra el asiento esta reservado" <<endl;
		cout<<"Verificación del cliente" <<endl;
		check_cedula_verificar_asiento_cliente_compra(fila,columna ,cine_asientos,nuevo_cliente,dato_clientes,numero_de_reservas);

	}
	mostrarteatro(fila, columna,cine_asientos);
	return nuevo_cliente;
	


}

void check_cedula_verificar_asiento_cliente_compra(int fila, int columna , int cine_asientos[][10], datos struct_cliente,datos dato_clientes[50],int numero_de_reservas){
	int check_fila,check_columna;

	for (int i = 0; i < numero_de_reservas; ++i){
		if (struct_cliente.cedula == dato_clientes[i].cedula){
			check_fila = dato_clientes[i].fila_silla;
			check_columna = dato_clientes[i].columna_silla;
			if (cine_asientos[check_fila][check_columna] == 2){
				cout<<"Asiento comprado en la posicion: " <<check_fila<<","<<check_columna<<endl;
				cine_asientos[check_fila][check_columna] = 3;
			}

			if (cine_asientos[check_fila][check_columna] == 3){
				cout<<"El asiento ya esta comprado en la posicion: " <<check_fila<<","<<check_columna<<endl;
			}
		}
	}
}

bool check_asiento_compra(int fila_cliente,int columna_cliente,int cine_asientos[][10]){
		if (cine_asientos[fila_cliente][columna_cliente] == 1){
			cout<<"El asiento en la posicion: " <<fila_cliente<<","<<columna_cliente<<"  está disponible para la venta."<<endl;
			cout<<endl;
			return true;
		}else if(cine_asientos[fila_cliente][columna_cliente] == 2){
			cout<<"El asiento en la posicion: " <<fila_cliente<<","<<columna_cliente<<"  está reservado."<<endl;
			cout<<endl;
			return false;

		}
}

datos reserva(int fila, int columna, int cine_asientos[][10]){
	datos nuevo_cliente;
	bool ocupado;
	int fila_cliente,columna_cliente;

	cout<<"ingrese su nombre completo: ";
	cin>>nuevo_cliente.nombre;
	cout<<"digite su cedula de identidad: ";
	cin>>nuevo_cliente.cedula;

	do{
		cout<<"En que fila quiere su asiento: ";
		cin>>nuevo_cliente.fila_silla;
		fila_cliente = nuevo_cliente.fila_silla;

		cout<<"En que columna quiere su asiento: ";
		cin>>nuevo_cliente.columna_silla;
		columna_cliente = nuevo_cliente.columna_silla;

		if(nuevo_cliente.fila_silla>=fila || nuevo_cliente.columna_silla>=columna){
			cout<<endl;
			cout<<"esta silla no existe"<<endl;
			cout<<endl;
		}
		ocupado=check_asiento(fila_cliente,columna_cliente,cine_asientos);

	}while(nuevo_cliente.fila_silla>=fila || nuevo_cliente.columna_silla>=columna || ocupado==false);
	cine_asientos[fila_cliente][columna_cliente] = 2;

	return nuevo_cliente;
}



bool check_asiento(int fila_cliente,int columna_cliente,int cine_asientos[][10]){
	if (cine_asientos[fila_cliente][columna_cliente] == 0){
		cout<<"El asiento en la posicion: " <<fila_cliente<<","<<columna_cliente<<" no está disponible por normas de bioseguridad.";
		cout<<endl;
		cout<<"Por favor ingrese un número de asiento correcto"<<endl;
		cout<<endl;
		return false;
	}else if (cine_asientos[fila_cliente][columna_cliente] == 1){
		cout<<"El asiento en la posicion: " <<fila_cliente<<","<<columna_cliente<<" está disponible, asiento libre.";
		cout<<endl;
		return true;
	}else if (cine_asientos[fila_cliente][columna_cliente] == 2){
		cout<<"El asiento en la posicion: " <<fila_cliente<<","<<columna_cliente<<" no está disponible, asiento reservado.";
		cout<<endl;
		cout<<"Por favor ingrese un número de asiento correcto"<<endl;
		cout<<endl;
		return false;
	}else{
		cout<<"El asiento en la posicion: " <<fila_cliente<<","<<columna_cliente<<" no está disponible, asiento vendido.";
		cout<<endl;
		cout<<"Por favor ingrese un número de asiento correcto"<<endl;
		cout<<endl;
		return false;
	}
}

void mostrar_clientes(int numero_de_reservas, datos dato_clientes[50]){
	cout<<" "<<endl;
	cout<<"- Base de datos clientes: "<<endl;
	for (int i = 0; i < numero_de_reservas; ++i){
		cout<< "   Nombre: "<<dato_clientes[i].nombre<<endl;
		cout<< "   Cédula: "<<dato_clientes[i].cedula<<endl;
		cout<< "   Fila: "<<dato_clientes[i].fila_silla<<endl;
		cout<< "   Columna: "<<dato_clientes[i].columna_silla<<endl;
		cout<<" "<<endl;
	}
}


void cancelarcompra(int fila, int columna, int cine_asientos[][10],datos dato_clientes[50],int numero_de_reservas){
	int cedula;
	bool notfound=false;
	cout <<"Ingrese el número de cédula con la cual ingreso la reserva o la compra.";
	cin >>cedula;
	for (int i = 0; i < numero_de_reservas; ++i){
		if(dato_clientes[i].cedula == cedula){
			notfound=true;
			cine_asientos[dato_clientes[i].fila_silla][dato_clientes[i].columna_silla]=1;
		}
	}

	if (notfound ==true){
		cout <<"La cédula "<< cedula <<"no está en la base de datos";
	}
}
