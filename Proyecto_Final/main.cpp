#include <iostream>
#include <vector>
#include <array>
#include <ctime> 
#include <cstdlib>
#include "airport.hpp"
using namespace std;
int main(int argc, char const *argv[]){
    //Los 30 aeropuertos más importantes del mundo y MTY
    vector<string> airportCodes = {"MTY","ATL","PEK","ORD","LHR","HND","LAX","CDG","DFW",
    "FRA","DEN","HKG","MAD","DXB","JFK","AMS","CGK","BKK","SIN","CAN","PVG","IAH",
    "LAS","SFO","PHX","CLT","FCO","SYD","MIA","MCO","MUC"};
    //Por cada airportCode hay un airportIndex, esto va a permitir tener un contador por destino.  
    vector<int> airportIndex = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18,19, 20, 21, 22,23, 24, 25, 26, 27, 28, 29, 30}; 
    //Las 12 aerolíneas más importantes de México
    vector <string> airlines = {"Interjet", "Aeromexico", "VivaAerobus", "Aeromar", "Volaris", "TAR Aerolineas", "American Airlines", "Delta Airlines", "United Airlines", "Turkish Airlines", "Lufthansa", "Air France"}; 
    //Contadores, son arreglos que incrementan de acuerdo a los vectores anteriores. 
    int monthQuantity[12] = {0}; 
    int terminalQuantity[2] = {0}; 
    int destinationQuantity[31] = {0}; 
    int flightQuantityAirline[12] = {0}; 
    //Salen del Aeropuerto Internacional de la Ciudad de México. 
    Airport aicm("AICM"); 

    //Permite que se utilice el método rand() con resultados diferentes
    srand((int)time(0));

    //Crear aerolíneas con sus vuelos
    for(int idxA = 0; idxA < 12; idxA++){ 
        //Crea un vector flights para cada aerolínea
        vector <Flight> flights;
        int randomidx = ((rand() % 20 )+ 1); 
        for(int idxF = 0; idxF < randomidx; idxF++){ //La cantidad de vuelos por aerolínea es al azar
            flights.push_back(Flight(rand()%12, rand()%31, (rand()%2)));  //Agrega el vuelo al vector de vuelos de la aerolínea. 
            monthQuantity[flights[idxF].getMonth()]++;  //Incrementa en el índice correspondiente al mes
            terminalQuantity[flights[idxF].getTerminal()]++; //Incrementa en el índice correspondiente a la terminal
            destinationQuantity[flights[idxF].getDestination()]++; //Incrementa en el índice correspondiente al destino
            flightQuantityAirline[idxA]++; //Incrementa en el índice correspondiente a la aerolínea
            randomidx = rand()%20 * 10; //Cambia la cantidad de vuelos que se van a agregar
        }
        //Se agrega la aerolínea con todos sus vuelos al AICM.
        aicm.addAirline(airlines[idxA],flights);    
    }
    //Responde: ¿Cuántos vuelos registrados tienen las aerolíneas que están en el aeropuerto?
    int airlinesFlightsTotal = 0; //Contador prueba
    for(int idxA = 0; idxA < 12; idxA++){
        airlinesFlightsTotal += flightQuantityAirline[idxA] ; 
        cout << "La aerolínea " <<  airlines[idxA] << " tiene " << flightQuantityAirline[idxA] << " vuelos"<< endl; 
    }
    //Prueba: La cantidad de vuelos coincide siempre. 
    cout << "En total hay: " << airlinesFlightsTotal << " vuelos." << endl; 
    //Responde: ¿Cuántos vuelos de salida hay por mes?
    int monthFlightsTotal = 0; //Contador prueba
    for(int idxM = 0; idxM <12; idxM++ ){
        monthFlightsTotal += monthQuantity[idxM] ;
        cout << "En el mes " << idxM+1 << " hay " << monthQuantity[idxM] << " vuelos de salida registrados."<< endl; 
    }
    cout << "En total hay: " << monthFlightsTotal << " vuelos." << endl;
    //Responde: ¿Cuántos vuelos de salida hay por destino?
    int destinationFlightsTotal = 0; //Contador prueba
    for(int idxD = 0; idxD < 31; idxD++ ){
        destinationFlightsTotal += destinationQuantity[idxD] ;
        cout << "Hacia el aeropuerto " << airportCodes[idxD] << " hay "<< destinationQuantity[idxD] << " vuelos registrados."<< endl; 
    }
    cout << "En total hay: " << destinationFlightsTotal << " vuelos." << endl;
    // Responde: ¿De qué terminal salen más vuelos?
    int terminalFlightsTotal = 0; //Contador prueba
    for(int idxT = 0; idxT < 2; idxT++ ){
        terminalFlightsTotal += terminalQuantity[idxT] ;
        cout << "Hay  " << terminalQuantity[idxT] << " vuelos registrados en la terminal "<< idxT+1<< endl; 
    }
    cout << "En total hay: " << terminalFlightsTotal << " vuelos." << endl;
    if(terminalQuantity[0] == terminalQuantity[1]){
        cout << "La terminal 1 y 2 tienen la misma cantidad de vuelos." << endl; 
    }else if(terminalQuantity[0] > terminalQuantity[1]){
        cout << "La terminal 1 tiene más vuelos registrados." << endl;
    }
    else{
        cout << "La terminal 2 tiene más vuelos registrados." << endl; 
    }

    return 0;
}
