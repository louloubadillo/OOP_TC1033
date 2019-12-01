#include <iostream>
#include <vector>
#include <array>
#include <ctime> 
#include <cstdlib>
#include "airport.hpp"
using namespace std;
int main(int argc, char const *argv[]){
    //Los 30 aeropuertos más importantes del mundo y AICM
    vector<string> airportCodes = {"MEX","ATL","PEK","ORD","LHR","HND","LAX","CDG","DFW",
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
    //Salen del Aeropuerto  Internacional de la Ciudad de México. 
    Airport aicm("AICM"); 


    for(int idxA = 0; idxA < 12; idxA++){ 
        vector <Flight> flights;
        srand((int)time(0)); 
        int randomidx = (rand() % 20 + 1); 
        for(int idxF = 0; randomidx; idxF++){ 
            flights.push_back(Flight(rand()%12, rand()%31, (rand()%2)));  
            monthQuantity[flights[idxF].getMonth()]++; 
            terminalQuantity[flights[idxF].getTerminal()]++; 
            destinationQuantity[flights[idxF].getDestination()]++;  
            flightQuantityAirline[idxA]++;
            randomidx = rand()%10; 
        }
        aicm.addAirline(airlines[idxA],flights);    
    }
/* ¿Cuántos vuelos registrados tienen las aerolíneas que están en el aeropuerto?
¿Cuántos vuelos de salida hay por mes?
¿Cuántos vuelos de salida hay por destino?
¿De qué terminal salen más vuelos?*/
    for(int idxA = 0; idxA < 12; idxA++){
        cout << "La aerolínea " <<  airlines[idxA] << " tiene " << flightQuantityAirline[idxA] << " vuelos"<< endl; 
    }

    for(int idxM = 0; idxM <12; idxM++ ){
        cout << "En el mes " << idxM+1 << " hay " << monthQuantity[idxM] << " vuelos de salida registrados."<< endl; 
    }

    for(int idxD = 0; idxD < 31; idxD++ ){
        cout << "Hacia el aeropuerto " << airportCodes[idxD] << " hay "<< destinationQuantity[idxD] << " vuelos registrados."<< endl; 
    }

    for(int idxT = 0; idxT < 2; idxT++ ){
        cout << "Hay  " << terminalQuantity[idxT] << " vuelos registrados en la terminal "<< idxT+1<< endl; 
    }
    if(terminalQuantity[0] > terminalQuantity[1]){
        cout << "La terminal 1 tiene más vuelos registrados." << endl; 
    }else{
        cout << "La terminal 2 tiene más vuelos registrados." << endl; 
    }

    return 0;
}