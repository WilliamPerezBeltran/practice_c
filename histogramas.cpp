#include <iostream>  
using namespace std;  

int main(void) {  
	int c,n,temporal;
	
	cout<< "tamaño del arreglo"<<endl;
	cin>> n;
	int age[n];
	// agrego las edades al arreglo
	for (int i = 0; i < n; ++i){
		cout<< "Ingrese la edad"<<endl;
		cin>> age[i];
	}
	// recorro el arreglo imprimiendo las edades
	for (int i = 0; i < n; ++i){
		cout<<age[i]<< ", ";
	}
	cout<<endl;
	// ordeno el arreglo con el metodo burbuja
	for (int i = 0;i < n; i++){
		for (int j = 0; j< n-1; j++){
			if (age[j] > age[j+1]){ // Ordena el array de mayor a menor, cambiar el "<" a ">" para ordenar de menor a mayor
			temporal = age[j]; 
			age[j] = age[j+1]; 
			age[j+1] = temporal;
			}
		}
	}
	// recorro el arreglo ya ordenado
	for (int i = 0; i < n; ++i){
		cout<<age[i]<< ", ";
	}
	cout<<endl;
	int contador=0;
	// obtengo el tañmaño del arreglo en donde van 
	// a estar los unique numbers
	for (int i=0; i<n; i++){ 
		if(age[i]==age[i+1]){
			continue;
		}else{
			contador++;
			cout<<age[i]<<" ";
		}
	}

	int contador_unique_number=contador;
	int unique_numbers[contador_unique_number];
	contador=0;
	// agrego los unique numbers al arrelgo unique_numbers

	for (int i=0; i<n; i++){ 
		if(age[i]==age[i+1]){
			continue;
		}else{

			unique_numbers[contador] = age[i];
			contador++;
		}
	}

	cout<<""<<endl;
	cout<<""<<endl;
	// imprimo el resultado del arreglo de los unique number 

	cout<<"unique_numbers[i]"<<endl;
	for (int i = 0; i < contador_unique_number; ++i){
		cout<<unique_numbers[i]<< ", ";
	}
	cout<<""<<endl;

	// cuento las frecuencias
 	int contador_frecuencia=0; 
 	int histograma[contador_unique_number]; 
	for (int i = 0; i < contador_unique_number; ++i){
		for (int j = 0; j < n; ++j){
			if (unique_numbers[i]==age[j]){
				contador_frecuencia++;
				
			}
		}
		histograma[i]=contador_frecuencia;
		contador_frecuencia=0;
	}

	for (int i = 0; i < contador_unique_number; ++i){
		cout<<histograma[i]<< ", ";
	}
	cout<<""<<endl;

	// los ordeno de mayor a menor el histograma
	// los ordeno de mayor a menor el histograma

	for (int i = 0;i < contador_unique_number; i++){
		for (int j = 0; j< contador_unique_number-1; j++){
			if (histograma[j] > histograma[j+1]){ 
			temporal = histograma[j]; 
			histograma[j] = histograma[j+1]; 
			histograma[j+1] = temporal;
			}
		}
	}
	// los ordeno de mayor a menor el unique numbers
	// los ordeno de mayor a menor el unique numbers

	for (int i = 0;i < contador_unique_number; i++){
		for (int j = 0; j< contador_unique_number-1; j++){
			if (unique_numbers[j] > unique_numbers[j+1]){ 
			temporal = unique_numbers[j]; 
			unique_numbers[j] = unique_numbers[j+1]; 
			unique_numbers[j+1] = temporal;
			}
		}
	}

	cout<<"las frecuencias mas altas son:"<<endl;
	cout<<histograma[0]<< ", ";
	cout<<histograma[1]<< ", ";
	cout<<""<<endl;
	return 0;

}    
