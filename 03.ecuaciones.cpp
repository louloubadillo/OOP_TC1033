#include <iostream>
#include <cmath> //Librería funciones para matemáticas
using namespace std; //para no repetir std 
double ecuacion1(double x){
    double x_rad = x * (M_PI /180);
    return (pow(sin(1/x_rad),2))/x; 
}
double ecuacion2(double x){
    double x_rad = x * (M_PI /180);
    return (pow(sin(x_rad), (1/3))) / (4*x) + (5 * M_PI * x) * (tan(x_rad*x_rad));
}
int main() {  
    double x; 
    cout<< "Dame un valor para x : \n"; 
    cin>> x; 
    cout<< "El resultado de la primera ecuación es: " << ecuacion1(x) << "\n"; 
    cout<< "El resultado de la primera ecuación es: " << ecuacion2(x) << "\n";
    return 0; 
}