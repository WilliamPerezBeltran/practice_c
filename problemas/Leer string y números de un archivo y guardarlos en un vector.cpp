


#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>
#include <vector>

using namespace std;

int main(){
	cout << "Lectura de archivos";
	cout << endl << endl;

//Declarar vectores para cada variable
	vector <string> vNombres;
	vector <int> vCreditos;
	vector <float> vNotas;

//Obtener nombres
	string nombre;
ifstream fNombres ("Nombres.txt"); //Apertura del archivo en modo lectura
if(fNombres.is_open()){
	while (getline(fNombres, nombre, '\n')){
		vNombres.push_back(nombre);
		cout << nombre << endl;
	}
}
fNombres.close();
//Comprobacion
for (int i = 0; i < vNombres.size(); i++){
	cout << vNombres[i];
	cout << endl;
}
//Obtener creditos
int cre = 0;
ifstream fCreditos ("Creditos.txt"); //Apertura del archivo en modo lectura
if(fCreditos.is_open()){
	while (fCreditos >> cre){
		vCreditos.push_back(cre);
		cout << cre << endl;
	}
}
fCreditos.close();

//Comprobacion
for (int j = 0; j < vCreditos.size(); j++){
	cout << vCreditos[j];
	cout << endl;
}

 //Obtener calificaciones
float cal = 0;
ifstream fNotas ("Notas.txt"); //Apertura del archivo en modo lectura
if(fNotas.is_open()){
	while (fNotas >> cal){
		vNotas.push_back(cal);
		cout << cal << endl;
	}
}
//Comprobacion
for (int k = 0; k < vNotas.size(); k++){
	cout << vNotas[k];
	cout << endl;
}
fNotas.close();

return 0;
}