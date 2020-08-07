#include <iostream>
using namespace std;

// You have already learned that cout is 
// used to output (print) values. 
// Now we will use cin to get user input.

// cin is a predefined variable that reads 
// data from the keyboard with the extraction operator (>>).
// In the following example, the user can input a number, 
// which is stored in the variable x. Then we print the value of x:

int main() {
	int x;
	cout << "type the input: \n"; // Type a number and press enter
	cin >> x; // Get user input from the keyboard
	cout << "your input is: " << x << "\n"; // Display the input value

}

// Good To Know
// cout is pronounced "see-out". Used for output, 
// and uses the insertion operator (<<)

// cin is pronounced "see-in". Used for input, 
// and uses the extraction operator (>>)