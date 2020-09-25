#include <iostream>
#include <cstdlib>
using namespace std;

int main ()
{
  int dinero_inicial ,dinero, numero_apuesta, numero_rando;
  bool pivote=true;
  do{
      if(pivote){
          pivote=false;
          cout<<"con cuento dinero llega"<<endl;
          dinero_inicial = dinero
          cin>>dinero;
      }
      cout<<"a que número le apuesta"<<endl;
      cin>>numero_apuesta;

      if (numero_apuesta == std::rand()%30){
        dinero+=200;
      }else{
        dinero+=100;
      }
      
  }while(dinero > 100 && dinero <= 2000);

  cout<<"llego con "<< dinero_inicial <<" y salio con "<< dinero << endl;




  return 0;
}