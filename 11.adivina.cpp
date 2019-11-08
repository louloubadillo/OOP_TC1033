#include <iostream>
#include <cstdio>     
#include <cstdlib>
#include <ctime>
using namespace std; //para no repetir std 
//Juego en donde el usuario adivina un número entre 1 y 10
void juego_adivinar(int intentos){
    //Obtener un número random (entre 1 y 10)
    srand (time(NULL));
    int numero = rand() % 10 + 1; 
    //Mientras tenga intentos
    for(int i=0; i<intentos; i++){
        cout<<"Tienes "<<intentos-i<<" intentos"<<endl; 
        int intento; //input del usuario 
        cout<<"Adivina un número entre 0 y 10: \n";
        cin>>intento; 
        //si su input es el número, adivinó
        if (intento == numero){
            cout<< "¡Adivinaste!"<<endl; 
            break; 
        }
        //si no, puede ser mayor o menor
        else{
            cout<<"Fallaste "<<endl; 
            if (intento < numero){
                cout<<"El número que elegiste es menor al que buscas..."<<endl; 
            }
            else{
                cout<<"El número que elegiste es mayor al que buscas..."<<endl; 
            }
        }

    }
}
int main() {  
    juego_adivinar(5); //ejemplo con 5 intentos
    return 0; 
}