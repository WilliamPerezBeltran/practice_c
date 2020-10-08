

/**/
(50%) Cuando usted solicita dinero prestado para comprar una casa, un automóvil o para algún
otro propósito, paga el préstamo realizando pagos periódicos durante un período de tiempo
determinado. Por supuesto, la compañía de préstamos cobrará intereses sobre el préstamo. Cada
pago periódico consiste en los intereses del préstamo y el pago del monto principal. Para ser
específicos, suponga que pide prestado $1,000,000 a una tasa de interés del 7.2% anual y los
pagos son mensuales. Suponga que su pago mensual es de $ 25,000. Ahora, el interés es del
7,2% anual y los pagos son mensuales, por lo que la tasa de interés mensual es del 7,2 / 12 =
0,6%. El interés del primer mes en $1,000,000 es 1,000,000 x 0.006 = 6,000. Debido a que el
pago es de $25,000 y el interés del primer mes es de $6,000, el pago del monto principal es de
$25,000 – $6,000 = $19,000. Esto significa que después de realizar el primer pago, el monto del
préstamo es $1,000,000 – $19,000 = $981,000. Para el segundo pago, el interés se calcula en
$981,000. Entonces, el interés para el segundo mes es 981,000 x 0.006 = 5,886. Esto implica

que el pago hacia el monto principal es $25,000 – $5,886 = $19,114 y el saldo restante después
del segundo pago es $981,000 – $19,114 = $961,886. Este proceso se repite hasta que se paga el
préstamo.
Escriba un programa que acepte como entrada el monto del préstamo, la tasa de interés por año
y el pago mensual. (Ingrese la tasa de interés como porcentaje. Por ejemplo, si la tasa de interés
es 7.2% por año, entonces ingrese 7.2). El programa genera la cantidad de meses que tomaría
pagar el préstamo.
Nota: Tenga en cuenta que si el pago mensual es inferior al interés del primer mes, luego de
cada pago, el monto del préstamo aumentará. En este caso, el programa debe advertir al deudor
que el pago mensual es demasiado bajo y con este pago mensual, el monto del préstamo no se
puede pagar.

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