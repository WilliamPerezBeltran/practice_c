#include<iostream>
using namespace std;
int main()
{

  int n,cifras[10],i=0,suma=0,pivote,x,y;

  cout<<"deme el número"<<endl;
  cin>>n;

  while(n>0){
    cifras[i]=n%10;
    n = n/10;
    i++;
  }

  for (int s=i-1;s>=0;s--){
    suma+=cifras[s];
    cout<<cifras[s]<<endl;
  }

  cout<<"La suma dio como resultado: "<< suma <<endl;
  
  if(suma>=10 && suma <100){
    pivote = suma; 
    x = suma/10;
    y = pivote -(x*10);

    if(x+y == 9){
      cout<<"el numero es divisible por 9"<<endl;
    }else{
        cout<<"el numero no es divisible por 9"<<endl;
    }
  }else{

    if(suma == 9){
      cout<<"el numero es divisible por 9"<<endl;
    }else{
      cout<<"el numero no es divisible por 9"<<endl;
    }
  }

  return 0;
}