#include <iostream>
#include <string>
using namespace std;


int main()
{

  int x ;
  do {
    // "Hello, world!" is printed at least one time
    //  even though the condition is false
    cout<<"Ingrese algo !\n";
    cin >> x;
  } while ( x != 0 );
  cin.get();
}
