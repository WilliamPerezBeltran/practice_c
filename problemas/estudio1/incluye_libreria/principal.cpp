/**
 * Hola mundo en C++
 *
 * Tutorial: https://hetpro-store.com/TUTORIALES/compilar-cpp-g-linux-en-terminal-leccion-1/
 Autor: Dr. Rubén E-Marmolejo.
 Primera versión: Miercoles 17 de Enero 2018
 Guadalajara, Jalisco, México
 Curso básico de G++ en Linux con línea de comandos
 
 */

#include<iostream>
#include"biblioteca1.h"

using namespace std;

int main(){
	int resultado = suma(10,16);
	cout << "El resultado es: " << resultado << "\n";
	return 0;

}
