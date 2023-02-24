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
    cout<<"[5] Salir"<<endl;
    
    cin>>eleccion;

    switch (eleccion){

        // ICMP
        case 1:

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
        cout<< "+_______________|________________|__________________+"<<endl<<endl;

        cout<<"ICMP es un protocolo de control y de errores en la capa de red que se utiliza para enviar mensajes de control y notificaciones en la red."<<endl<<endl;

        
            cout<<"Capturando paquetes ICMP"<<endl;
            system("tcpdump -i any icmp");
            break;

        // HTTP
        case 2:

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
        cout<< "+_______________|________________|__________________+"<<endl<<endl;

        cout<<"El protocolo HTTP es un protocolo de comunicacion en la capa de aplicacion utilizado para la transferencia de informacion el la WWW. Permite la recuperacion de recursos de informacion desde servidores web a traves de solicitudes y respuestas entre un cliente y un servidor web"<<endl<<endl;;


            cout<<"Capturando paquetes HTTP"<<endl;
            system("tcpdump -i any -n -s 0 'tcp port 80'");
            break;
        
        // TCP
        case 3:

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
        cout<< "+_______________|________________|__________________+"<<endl<<endl;

        cout<<"TCP es un protocolo de la capa de transporte utilizado para establecer y mantenet conexiones de red confiables y orientadas a conexion entre aplicaciones de distintos hosts. Proporciona segmentacion de datos, cotrol de flujo y de congestion para una transmision de datos confiable"<<endl<<endl;

            cout<<"Capturando paquetes TCP"<<endl;
            system("tcpdump -i any tcp");
            break;

        // DHCP
        case 4:

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
        cout<< "+_______________|________________|__________________+"<<endl<<endl;

        cout<<"DHCP es un protocolo de la capa de aplicacion usando para asignar automaticamente direcciones IP y otra informacion de configuracion a los dispositivos de red."<<endl<<endl;

            cout<<"Capturando paquetes DHCP"<<endl;
            system("tcpdump -i any -n -s 0 'udp port 67 or udp port 68'");
            break;
        
        // Salir
        case 5:
            cout<<"Saliendo...";
            return 0;
            break;

        default:
            cout<<"Opcion no valida"<<endl;
            break;
        }

        return 0;
        
    }
