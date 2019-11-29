#include <iostream>
#include <vector>
#include "airline.hpp"
using namespace std;

class Airport{
    private:   
        string name; 

    public: 
        vector<Airline> airlines; 

        Airport(string name_){
            name = name_; 
        }
        
        void addAirline(string n,vector <Flight> F){
            Airline a = Airline(n,F); 
            airlines.push_back(a); 
        }

}; 