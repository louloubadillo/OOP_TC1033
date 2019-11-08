#include <iostream>
#include <cmath>
#include <random>
#include <ctime>
#include <vector>
using namespace std; //para no repetir std 
double promedio(vector<int>numeros){
    int prom = 0; 
    for (int i = 0; i < numeros.size(); i++){
        prom += i; 
    }
    prom /= sizeof(numeros); 
    return prom; 
}

int main() {  
    int terminos; 
    vector <int> numeros; 
    cout<< "¿Cuántos números quieres que tenga la lista?: \n"; 
    cin >> terminos; 
    srand((int)time(0))
    for (int i = 0; i<terminos;i++){
        numeros.push_back(rand()%100 +1); 
    }
    cout<< "Tu lista es: "
    return 0; 
}