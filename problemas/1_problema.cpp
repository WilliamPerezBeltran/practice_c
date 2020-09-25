#include<iostream>
using namespace std;
int main()
{


  int n,encontrar_divisibilidad=10000000;
 

  cout<<"deme el numero ";
  cin>>n;

  while(encontrar_divisibilidad>=1 && encontrar_divisibilidad<10){
    encontrar_divisibilidad = encontrar_divisibilidad/10;

  }

    cout<<"divisibilidad ";
    cin>>encontrar_divisibilidad;





  return 0;
}