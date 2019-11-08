#include <iostream>
using namespace std; //para no repetir std 
//método para formar rectágulos
void cuadrado(int width, int height){ //pedir ancho y alto 
    //Si es par, lo hace impar
    if (width % 2 == 0 ){
        width++; 
    }
    if (height % 2 == 0){
        height++; 
    }
    //Itera en las filas y columnas para imprimir los símbolos dependiendo de si es la esquina
    for(int i=0; i<height; i++){ 
        for(int j=0; j<width; j++){
            if ((0 < i && i < height - 1) &&( 0 < j && j < width - 1)){
                cout<< " ";  
            }
            else if (j % 2 == 0){
                cout<<"+"; 
            }
            else{
                cout<<"-"; 
            }
        }
        cout << "\n";
    }

}
int main() {  
    //Pedir los valores
    int alto; 
    cout<<"Dime el alto del cuadrado: \n"; 
    cin>>alto; 
    int ancho; 
    cout<<"Dime el ancho del cuadrado: \n"; 
    cin>>ancho; 
    cuadrado(ancho,alto); //usar el método
    return 0; 
}