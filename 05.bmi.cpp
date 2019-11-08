#include <iostream>
#include <cmath>
using namespace std; //para no repetir std
double bmi(double altura, double peso){
    double indice = pow(peso/altura, 2); 
    if (indice < 20){
        cout<<"Peso bajo \n";
    }
    else if (indice < 25){
        cout<<"Normal \n"; 
    }
    else if (indice < 30 ){
        cout<<"Sobre peso \n"; 
    }
    else if (indice < 40){
        cout<<"Obesidad \n";
    }
    else{
        cout<<"Obesidad morbida \n"; 
    }
}
int main() {
    double peso; 
    cout<<"Dame tu peso: \n"; 
    cin>>peso; 
    double altura; 
    cout<<"Dame tu altura: \n";
    cin>>altura; 
    bmi(altura,peso); 
    return 0; 
}