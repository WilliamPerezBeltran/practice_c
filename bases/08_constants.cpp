#include <iostream>
using namespace std;


// Constants
// When you do not want others (or yourself) 
// to override existing variable values, use 
// the const keyword (this will declare the variable as "constant", 
// which means unchangeable and read-only):


int main() {

	const int variable = 34;
	std::cout << "Hello World! \n";
	std::cout << variable;
}