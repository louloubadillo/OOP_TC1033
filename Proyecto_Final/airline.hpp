#include <iostream>
#include <vector>
#include "flight.hpp"
using namespace std;
class Airline{
    private:   
        string name; //Las aerolíneas tienen un nombre. 
        int totalFlights; //Cantidad total de vuelos que tiene.

    public: 
        vector <Flight> flights; //Almacena todos los vuelos de la aerolínea. 

        //Constructor con parámetros definidos
        Airline(string name_ , vector<Flight> flights_){
            string name = name_;  
            vector <Flight> flights = flights_;  
            totalFlights++; 
        }

        //Permite agregar un vuelo al vector flights si ya se usó el constructor de vuelo para crearlo. 
        void addFlight(Flight flight_){
            flights.push_back(flight_);
        }

        //Permite agregar un vuelo al vector flights a partir de los parámetros que se escriban en el método. 
        void addFlight(int m, int d, int t){
            Flight f = Flight(m,d,t); 
            flights.push_back(f); 
        }

        //Setter para el nombre. 
        void setName(string s){
            name = s; 
        }

        //Regresa el nombre. 
        string getName(){
            return name; 
        }
        
        //Regresa el vector flights. 
        vector<Flight> getFlights(){
            return flights; 
        }
        
        //Regresa la cantidad de vuelos que tiene cada aerolínea. 
        int getTotalFlights(){
            return flights.size(); 
        }

    
}; 