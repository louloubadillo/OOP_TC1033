#include <iostream>
#include <vector>
#include "airline.hpp"
using namespace std;
class Airport{
    private:   
        string name; 

    public: 
        vector <Airline> airlines; 

        Airport(string name_, vector<Airline> airlines_){
            name = name_; 
            airlines = airlines_; 
        }
        
        void addAirline(string n,vector <Flight> F, int t ){
            Airline a = Airline(n,F,t); 
            airlines.push_back(a); 
        }

}; 