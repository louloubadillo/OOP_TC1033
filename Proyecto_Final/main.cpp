#include <iostream>
#include <vector>
#include <array>
#include <ctime> 
#include <cstdlib>
#include "airport.hpp"
using namespace std;
int main(int argc, char const *argv[]){
    //The 30 most important airports worldwide and AICM
    vector<string> airportCodes = {"MEX","ATL","PEK","ORD","LHR","HND","LAX","CDG","DFW",
    "FRA","DEN","HKG","MAD","DXB","JFK","AMS","CGK","BKK","SIN","CAN","PVG","IAH",
    "LAS","SFO","PHX","CLT","FCO","SYD","MIA","MCO","MUC"};
    //For every airport code, there's a corresponding index, which will help with counters.  
    vector<int> airportIndex = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18,19, 20, 21, 22,23, 24, 25, 26, 27, 28, 29, 30}; 
    //12 most important airlines in Mexico
    vector <string> airlines = {"Interjet", "Aeromexico", "VivaAerobus", "Aeromar", "Volaris", "TAR Aerolineas", "American Airlines", "Delta Airlines", "United Airlines", "Turkish Airlines", "Lufthansa", "Air France"}; 

    int monthQuantity[12] = {0}; 
    int terminalQuantity[2]; 
    int destinationQuantity[31]; 
    int flightQuantityAirline[12]; 

    Airport aicm("AICM"); 


    for(int idxA = 0; idxA < 12; idxA++){
        vector <Flight> flights;
        aicm.addAirline(airlines[idxA],flights);  
        for(int idxF = 0; idxF < rand () % 2; idxF++){ 
            flights.push_back(Flight());
            monthQuantity[flights[idxF].getMonth()]++; 
            terminalQuantity[flights[idxF].getTerminal()]++; 
            destinationQuantity[flights[idxF].getDestination()]++;  
            flightQuantityAirline[idxA]++;
        }    
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







    return 0;
}
