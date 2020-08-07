#include <iostream>
using namespace std;

// In this example, the user must input two numbers. 
// Then we print the sum by calculating (adding) the two numbers:

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