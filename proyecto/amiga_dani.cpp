#include <iostream>
using namespace std;
// using namespace std;

int inicializar(int , int , int matriz[][10]);

int mostrarteatro(int,int, int matriz[][10]);

int mostrarclientes(int, int , int matriz[][10]);

int reserva(int, int, int matriz[][10], int fila2[1000],int columna2[1000], int);


int main()
{
    int fila=10;
    int columna=10;
    int m=5;
    
    int fila2;
    int columna2;
    int z;
    
    int matriz[10][10];
    
    inicializar(fila,columna,matriz);
    
    while(m==5)
    {
        
    cout<<endl;
    
    cout<<endl;
    
    cout<<"BIENVENIDO A SUPERCINE"<<endl;
    
    cout<<"_________________________________________"<<endl;
    
    cout<<endl;
    
    int opcion;
    
    cout<<"Ingrese 1 si desea reservar una silla"<<endl;
    cout<<"Ingrese 2 si desea comprar una boleta"<<endl;
    cin>>opcion;
    
    if(opcion==1)
    {
    mostrarteatro(fila, columna, matriz);
    
    mostrarclientes(fila, columna, matriz);
    
    reserva(fila,columna, matriz, fila2 , columna2 , z );
    }
    
    if(opcion==2)
    {
        
    }
    
    
    cout<<"Ingrese 5 si desea continuar el programa"<<endl;
    cout<<"Ingrese 0  si desea terminar el programa"<<endl;
    cin>>m;
    
    }

}

int inicializar(int fila, int columna, int matriz[][10])
{
    for(int i=0;i<fila;i++)
    {
        for(int j=0;j<columna;j++)
        {
            matriz[i][j]=1;
        }
    }
}

int mostrarteatro(int fila, int columna, int matriz[][10])
{
    cout<<"Sillas disponibles []"<<endl;
    
    cout<<"Sillas no disponibles[x]"<<endl;
    
    for(int i=0;i<fila;i++)
    {
        for( int j=0;j<columna;j++)
        {
            if(matriz[i][j]==0)
            {
            cout<<"[x]";
            
            cout<<"    ";
            }
            
            
            if(matriz[i][j]!=0)
            {
                cout<<"[ ]";
                
                cout<<"    ";
            }
        }
        
        cout<<endl;
    }
}

int mostrarclientes(int fila, int columna, int matriz[][10])
{
    string nombre[1000];
    int cedula[1000];
    int fila2[1000];
    int columna2[1000];
    
    int z=0;
    
    cout<<endl<<"Ingrese el nombre del cliente=";
    cin>>nombre[z];
    
    cout<<endl<<"Ingrese el número de cédula del cliente=";
    cin>>cedula[z];
    
    cout<<endl<<"ingrese la fila en la que desea reservar=";
    cin>>fila2[z];
    
    cout<<endl<<"ingrese la columna en la que desea reservar=";
    cin>>columna2[z];
    
    z=z+1;
}

int reserva(int fila, int columna, int matriz[][10], int fila[1000], int columna[1000], int z)
{
    
    int cont=0;
    
    for(int i=0;i<fila;i++)
    {
        for(int j=0;j<columna;j++)
        {
            if(i==fila2[z]&&j==columna2[z]&&matriz[i][j]!=0)
            {
                cont++;
                matriz[i][j]=0;
                matriz[i][j+1]=0;
                matriz[i][j-1]=0;
            }
            
            
        }
    }
    
    if(cont==1)
    {
        cout<<endl;
        
        cout<<"Está disponible"<<endl;
        
        cout<<endl;
    }
    
    if(cont==0)
    {
        cout<<endl;
        
        cout<<"No está disponible"<<endl;
        
        cout<<endl;
    }
    
    mostrar_sillas(fila, columna, matriz);
    
    z=z+1;
    
}
    
int comprar(int fila, int columna, int matriz[][10]
{
    
}