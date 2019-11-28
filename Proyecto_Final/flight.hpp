#include <iostream>
#include <ctime> 
#include <cstdlib>
using namespace std;
class Flight{

    private:   
        int month; //1-12 (ene-dic)
        int destination; //Referente al índice del arreglo
        int terminal; 

    public: 
        Flight(){
            month = rand() % 12; 
            destination = rand() % 30; 
            terminal = rand() % 2; 
        }
        Flight(int month_, int destination_, int terminal_){
            month = month_; 
            destination = destination_; 
            terminal = terminal_; 
        }
    
}; 