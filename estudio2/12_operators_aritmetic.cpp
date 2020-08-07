#include <iostream>
using namespace std;

// In this example, the user must input two numbers. 
// Then we print the sum by calculating (adding) the two numbers:


/*


Operator	  Name	     Description	                               Example	
  +			Addition	    Adds together two values	                x + y	
  -			Subtraction	    Subtracts one value from another	        x - y	
  *			Multiplication	Multiplies two values	                    x * y	
  /			Division	    Divides one value by another	            x / y	
  %			Modulus	        Returns the division remainder	            x % y	
  ++		Increment	    Increases the value of a variable by 1	    ++x	
  --		Decrement	    Decreases the value of a variable by 1	    --x




*/



int main() {

	cout << "aritmetic operator " << endl;

	int x = 1, y = 2, z = 3;
	int addition, subtraction, multiplication, division, modulus;
	int increment, decrement;

	addition = x + y;
	cout << "addition: " << addition << endl;

	subtraction = y - x;
	cout << "subtraction: " << subtraction << endl;

	multiplication = y * x;
	cout << "multiplication: " << multiplication << endl;

	division = y / x;
	cout << "division: " << division << endl;

	modulus = y % x;
	cout << "modulus: " << modulus << endl;

	increment = ++z;
	cout << "increment: " << increment << endl;

	decrement = --y;
	cout << "decrement: " << decrement << endl;


}