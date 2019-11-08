#include <iostream>
#include <cmath>
using namespace std; //para no repetir std 
bool primo(int numero){
    if (numero <= 1){
        return false; 
    }
    int contador = 2; 
    while (contador < numero){
        if (numero % contador == 0){
            return false; 
            contador++; 
        }
        return true; 
    }
}
int main() {  
    int numero; 
    cout<< "Dame un número: \n"; 
    cin>> numero; 
     if (primo(numero)){
         cout<< "Es primo \n"; 
     }
     else{
         cout<< "No es primo \n"; 
     }

    return 0; 
}