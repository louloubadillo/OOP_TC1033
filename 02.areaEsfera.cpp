#include <iostream>
#include <cmath>
using namespace std; //para no repetir std 

//Pide el radio para calcular el área
double area(double radio){
    return 4*M_PI*pow(radio,2); 
}
//Pide el radio para calcular el volumen
double volumen(double radio){
    return (4/3)*M_PI*pow(radio,3);
}
int main() {  
    double radio; 
    cout<<"Cálculo de área y volumen \n";
    cout<<"Dame el radio de la esfera \n";
    cin>>radio;
    double a = area(radio); 
    double v = volumen(radio); 
    cout<<"El área es: " << round(a) << " y el volumen es: " << round(v) << "\n"; 
    return 0; 
}