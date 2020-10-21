#include <iostream>

using namespace std;


int main(){
    int notas[2][3]={{1,2},{3,4,5}};
    int notas1[2][3]={{2,3},{6,7,8}};
    int suma[2][3];

   cout<<"primera matrices"<<endl;

    for(int i=0; i<2; ++i) {
       for(int j=0; j<2; ++j)
           cout<<notas[i][j]<<" ";
           cout<<endl;

   }
   cout<<"segundo matrices"<<endl;

   for (int i = 0; i < 2; ++i){
       for (int j = 0; j < 3; ++j)
        cout<<notas1[i][j]<<" ";
        cout<<endl;
       
   }
   cout<<"suma de las matrices"<<endl;
   for (int i = 0; i < 2; ++i){
       for (int j = 0; j < 3; ++j)
        suma[i][j] =  notas[i][j] +notas1[i][j];       
   }

   for (int i = 0; i < 2; ++i){
       for (int j = 0; j < 3; ++j)
        cout<<suma[i][j]<<" ";
        cout<<endl;
       
   }
}

