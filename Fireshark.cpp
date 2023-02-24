#include <iostream>
using namespace std;

int main(){

    int eleccion;
    cout<<"Bienvenido a la aplicacion Fireshark"<<endl;
    cout<<"------------------------------------"<<endl<<endl;

    cout<<"ELIJA UNA OPCION"<<endl;
    cout<<"[1] Capturar paquetes ICMP"<<endl;
    cout<<"[2] Capturar paquetes HTTP"<<endl;
    cout<<"[3] Capturar paquetes TCP"<<endl;
    cout<<"[4] Capturar paquetes DHCP"<<endl;




    cout<< "       OSI              PDU              TCP/IP"<<endl;
        cout<< "+---------------+----------------+------------------+"<<endl;
        cout<< "| Aplicaciones  |                |                  |"<<endl;
        cout<< "|_______________|                |                  |"<<endl;
        cout<< "| Presentacion  |     Datos      |    Aplicaciones  |"<<endl;
        cout<< "|_______________|                |                  |"<<endl;
        cout<< "|   Sesion      |                |                  |"<<endl;
        cout<< "|_______________|________________|__________________|"<<endl;
        cout<< "| Transporte    |   Segmento     |    Transporte    |"<<endl;
        cout<< "|_______________|________________|__________________|"<<endl;
        cout<< "|    Red        |    Paquete     |    Internet      |"<<endl;
        cout<< "|_______________|________________|__________________|"<<endl;
        cout<< "|Enlace de datos|     Trama      |    Acceso a Red  |"<<endl;
        cout<< "|_______________|________________|                  |"<<endl;
        cout<< "|     Fisica    |      Bits      |                  |"<<endl;
        cout<< "+_______________|________________|__________________+"<<endl;





    return 0;
}