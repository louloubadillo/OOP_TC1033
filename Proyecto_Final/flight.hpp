#include <iostream>
#include <ctime> 
#include <cstdlib>
using namespace std;
class Flight{

    private:   
        int month; //1-12 (ene-dic)
        int destination; //Referente al índice del arreglo
        int terminal; //1-2

    public: 
        Flight(){
            month = rand() % 12; 
            destination = rand() % 31; 
            terminal = rand() % 2 + 1; 
        }

        Flight(int month_, int destination_, int terminal_){
            month = month_; 
            destination = destination_; 
            terminal = terminal_; 
        }

        int getMonth(){
            return month; 
        }

        int getDestination(){
            return destination; 
        }
        
        int getTerminal(){
            return terminal; 
        }
    
}; 