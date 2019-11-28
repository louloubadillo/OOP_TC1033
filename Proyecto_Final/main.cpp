#include <iostream>
#include <array>
#include "flight.hpp"
#include "airline.hpp"
#include "airport.hpp"
using namespace std;
int main(int argc, char const *argv[]){
    //The 30 most important airports worldwide and AICM
    string airportcodes[31] = {"MEX","ATL","PEK","ORD","LHR","HND","LAX","CDG","DFW",
    "FRA","DEN","HKG","MAD","DXB","JFK","AMS","CGK","BKK","SIN","CAN","PVG","IAH",
    "LAS","SFO","PHX","CLT","FCO","SYD","MIA","MCO","MUC"};
    //For every airport code, there's a corresponding index, which will help with counters.  
    int airportindex[31] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17,
                            18, 19, 20, 21, 22,23, 24, 25, 26, 27, 28, 29, 30}; 
    //12 most important airlines in Mexico
    string airlines[12] = {"Interjet", "Aeromexico", "VivaAerobus", "Aeromar", "Volaris",
     "TAR Aerolineas", "American Airlines", "Delta Airlines", "United Airlines", 
     "Turkish AIrlines", "Lufthansa", "Air France"}; 
    
    //How many flights are going to airport, shown at the airportindex
    int destinationQuantity[31] = {0}; 
    //How many flights are leaving every month, shown at month-1 index. 
    int monthQuantity[12] = {0}; 
    int t1 = 0, t2 = 0; 

    return 0;
}
