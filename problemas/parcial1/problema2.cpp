
#include <iostream>

using namespace std;

int main()
{
    int prestamo=1000000, pago_mensual=25000,mes=0;
    double interes_anual=7.2,interes_mensual,tasa_mensual;
    // cout<<"prestamo";
    // cin>>;
    // cout<<"pago_mensual";
    // cin>>;
    // cout<<"interes_anual";
    // cin>>;

    tasa_mensual = interes_anual/12;
    interes_mensual = prestamo*  (tasa_mensual/100);
    do{
      mes+=1;
      pago_del_monto = pago_mensual-interes_mensual;
      prestamo = prestamo-pago_del_monto;

    }while(prestamo<0);

    return 0;
}
