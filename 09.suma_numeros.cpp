#include <iostream>
#include <cmath>
using namespace std; //para no repetir std 
int main() {  
    int numero = 1; 
    int suma = 0;  
    while (numero != 0){
        cout<<"Dame un número cero para terminar: "; 
        cin>>numero; 
        suma += numero;
    }
    cout<<"La suma es: "<< suma << endl; 
    return 0; 
}