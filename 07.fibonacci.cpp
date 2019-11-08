#include <iostream>
#include <cmath>
using namespace std; //para no repetir std
void fibonacci ( int terminos) {
    int anterior = 1; 
    int actual = 1; 
    int contador = 1; 
    cout << anterior << endl;

    while (contador < terminos){
        cout << actual << endl; 
        int siguiente = actual + anterior; 
        anterior = actual; 
        actual = siguiente; 
        contador++; 
        cout << ""; 
    }
}
int main() { 
    int terminos; 
    cout<< "Dame cuántos términos quieres \n"; 
    cin >> terminos;
    cout<< "Los términos son: \n";
    fibonacci(terminos); 
    return 0; 
}