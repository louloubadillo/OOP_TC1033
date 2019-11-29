#include <iostream>
#include <vector>
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

    vector <int> monthQuantity = {0}; 
    int t1 = 0, t2 = 0; 
    string name; 
    Airport aicm("AICM"); 


    for(int idxA = 0; idxA < 12; idxA++){
        vector <Flight> flights;
        aicm.addAirline(airlines[idxA],flights); // 
        for(int idxF = 0; idxF < rand () % 5; idxF++){ //random idxF
            flights.push_back(Flight()); 
        }  
    }
    return 0;
}
