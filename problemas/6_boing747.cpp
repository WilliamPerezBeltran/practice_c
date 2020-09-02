#include<iostream>
using namespace std;
int main()
{

  int capacidad = 18000;
  int peso, numeroDeMaletas = 0, pesoTotalDeMaletas = 0, ingresoTotal = 0, maletaMasLiviana = 0, maletaMasPesada = 0 ;
  bool pivoteMaletaLiviana= true, pivoteMaletaPesada = true;

  do{
    cout << "Deme el peso de la maleta " << endl;
    cin >> peso;

    if (peso != -1){

      if (peso < 500){
        numeroDeMaletas += 1;
        pesoTotalDeMaletas += peso;

        if(peso >= 0 && peso <=25){
          cout << "peso >= 0 && peso <=25" << endl;
          cout << peso << endl;
          if(pivoteMaletaLiviana){
            pivoteMaletaLiviana = false;
            maletaMasLiviana = peso;

          }else{
            if(peso < maletaMasLiviana ){
              maletaMasLiviana = peso;
            }
          }
        }else if (peso >= 26 && peso <= 300){
          cout << "eso >= 26 && peso <= 300" << endl;
          cout << peso << endl;
          ingresoTotal += (peso*1500);

        }else{
          cout << "> 300 pero menor a 500 " << endl;
          cout << peso << endl;
          ingresoTotal += (peso*2500);

          if(pivoteMaletaPesada){
            if(pivoteMaletaPesada){
              pivoteMaletaPesada = false;
              maletaMasPesada = peso;

            }else{
              if(peso > pivoteMaletaPesada){
                maletaMasPesada = peso;
              }


            }
          }

        }
      }else{
        cout << peso <<" Kg excede la capacidad de maxima de la maleta que es 500Kg " << endl;
        cout <<" por favor ingrese un valor menor a 500 kg " << endl;

      }
    }
  cout << "Peso total de las maletas*********** : " <<  pesoTotalDeMaletas << "Kg"<<endl;

  }while(peso != -1 || pesoTotalDeMaletas >= capacidad);
  // }while(peso != -1 || pesoTotalDeMaletas >= capacidad);

  cout << "Peso total de las maletas : " <<  pesoTotalDeMaletas <<endl;
  cout << "Número total de maletas para le vuelo: " <<  numeroDeMaletas <<endl;
  cout << "Peso promedio de las maletas: " <<  pesoTotalDeMaletas/numeroDeMaletas << "Kg"<<endl;
  cout << "Ingreso en pesos por concepto de las maletas: $" <<  ingresoTotal <<endl;
  cout << "Maleta mas liviana: " <<  maletaMasLiviana << "Kg"<<endl;
  cout << "Maleta mas pesada: " <<  maletaMasPesada << "Kg"<<endl;

  return 0;
}