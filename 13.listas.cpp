#include <iostream>
#include <cstdio>     
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std; //para no repetir std 
//Determina cuántos números pares e impares hay en una lista.  
int cuenta_pares(vector<int>numeros){
    int cuenta = 0; 
    for (auto& num : numeros){
        if(num % 2 == 0){ //si es par, agregar a la cuenta. 
            cuenta += 1;
        }         
    }
    return cuenta; 
}
int cuenta_impares(vector<int>numeros){
    int cuenta = 0; 
    for (auto& num : numeros){
        if(num % 2 != 0){ //si es impar, agregar a la cuenta.
            cuenta += 1;
        }         
    }
    return cuenta;
}
int main() {  
    int terminos; 
    vector<int>numeros; 
    cout<<"¿Cuántos números quieres que tenga la lista?: \n"; 
    cin>>terminos;
    srand((int)time(0)); 
    for(int i = 0; i<terminos; i++){
        numeros.push_back(rand() % 20 + 1); //llenar la lista de número aleatorios. 
    }
    int pares = cuenta_pares(numeros); //obtener la cuenta de pares. 
    int impares = cuenta_impares(numeros); //obtener la cuenta de impares. 
    cout<<"Tu lista es: \n"; 
    for (auto& num : numeros){ //imprimir la lista, número por número. 
        cout<<num<<endl;        
    }
    cout<<"Tu lista tiene "<<pares<<" números pares"<<endl; 
    cout<<"Tu lista tiene "<<impares<<" números impares"<<endl; 
    return 0; 
}