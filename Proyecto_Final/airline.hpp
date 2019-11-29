#include <iostream>
#include <vector>
#include "flight.hpp"
using namespace std;
class Airline{
    private:   
        string name; 
        int totalFlights; 

    public: 
        vector <Flight> flights; 

        Airline(string name_ , vector<Flight> flights_, int total ){
            string name = name_;  
            vector <Flight> flights = flights_;  
            int totalFlights = total; 
        }

        void addFlight(int m, int d, int t){
            Flight f = Flight(m,d,t); 
            flights.push_back(f); 
        }

        void setName(string s){
            name = s; 
        }

        string getName(){
            return name; 
        }
        
        vector<Flight> getFlights(){
            return flights; 
        }
        
        int getTotalFlights(){
            return flights.size(); 
        }

    
}; 