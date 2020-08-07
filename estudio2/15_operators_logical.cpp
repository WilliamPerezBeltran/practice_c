#include <iostream>
using namespace std;

// Logical Operators
// Logical operators are used to determine the logic between variables or values:


/*

Operator	Name	 		Description														Example	
  && 	     Logical and	    Returns true if both statements are true	     			  x < 5 &&  x < 10	
  || 	     Logical or	        Returns true if one of the statements is true	 			  x < 5 || x < 4	
  !	         Logical not	    Reverse the result, returns false if the result is true		  !(x < 5 && x < 10)

*/

int main() {
	int x, y;
	int sum;

	cout << "Type a number: \n";
	cin >> x;
	cout << "type another number: \n";
	cin >> y;
	sum = x + y;
	cout << "Sum is: " << sum << "\n";

}