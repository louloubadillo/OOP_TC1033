#include <iostream>
#include <ctime> 
#include <cstdlib>
using namespace std;
class Flight{

    private:   
        int month; //0-11 (ene-dic)
        int destination; //Referente al índice del vector airportCodes.
        int terminal; //0-1 (Terminal 1 y 2)

    public: 

        //Constructor de vuelo sin ingresar parámetros 
        Flight(){
            srand((int)time(0));
            month = (rand()%12); 
            destination = (rand()%31); 
            terminal = (rand()%2)+1; 
        }

        //Constructor con parámetros
        Flight(int month_, int destination_, int terminal_){
            month = month_; 
            destination = destination_; 
            terminal = terminal_; 
        }

        //Regresa el mes como un int 0-11 (Que correponde con los índices del arreglo monthQuantity)
        int getMonth(){
            return month; 
        }

        //Regresa el destino como un int 0-30 (Que correponde con los índices del arreglo destinationQuantity)
        int getDestination(){
            return destination; 
        }
        //Regresa la terminal como un int 0-1 (Que correponde con los índices del arreglo terminalQuantity)
        int getTerminal(){
            return terminal; 
        }
    
}; 