#include <iostream>
#include <string>
using namespace std;


void myFunction(){
	cout << "my function \n";
}

void functionParameter(string data){
	cout << data << "\n";
}

void functionParameterDefault(string data= "default parameter"){
	cout << data << "\n";


}
int main() {

	string cars[4] = {"dfa","adf","df","dsfadf"};
	cout << cars[3]<< "\n";
	int entero[4] = {1,2,3,4};
	cout << entero[3]<< "\n";

	for (int i =0;i<4;i++){
		cout << entero[i]<< "\n";
	}
	cout << "-----------"<< "\n";
	string letter[4];
	letter[0] = "william";
	letter[1] = "perez";
	letter[2] = "beltra";
	letter[3] = "oscar";

	for (int i ;i<4;i++){
		cout << letter[i]<< "\n";
	}

	string food = "pizza";
	string &meal = food;
	string amburger = "ambuger food";
	cout << food << "\n";
	cout << meal<< "\n";
	cout << &meal<< "\n";
	cout << &food<< "\n";
	cout << amburger<< "\n";
	cout << &amburger<< "\n";

	myFunction();
	functionParameter("william perez function ");
	functionParameterDefault("the another paramteter");


  return 0;
}
