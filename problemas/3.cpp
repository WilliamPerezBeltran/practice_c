// arrays example
#include <iostream>
using namespace std;


int n, result=0;

int main ()
{
 char array[10];
int size = 0;

// Add characters:
array[size++] = 'H';
array[size++] = 'e';
array[size++] = 'l';
array[size++] = 'l';
array[size++] = 'o';

 for ( n=0 ; n<5 ; n++ )
  {
  cout << array[n];
  }

  return 0;
}