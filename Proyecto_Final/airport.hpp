#include <iostream>
#include <vector>
#include "airline.hpp"
using namespace std;

class Airport{
    private:   
        string name; //Los aeropuertos tienen nombre. 

    public: 
        vector<Airline> airlines; //Tiene un vector de las aerolíneas (que a su vez tienen un vector de vuelos)

        //Constructor
        Airport(string name_){
            name = name_; 
        }
        
        //Agrega una aerolínea al aeropuerto, ingresando los parámetros en el método. 
        void addAirline(string n,vector <Flight> F){
            Airline a = Airline(n,F); 
            airlines.push_back(a); 
        }

}; 