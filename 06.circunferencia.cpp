#include <iostream>
#include <cmath>
using namespace std; //para no repetir std 
void dentro_fuera (double x, double y, double centrox, double centroy, double radio){
    double distancia = sqrt(pow(x-centrox,2) + (pow(y-centroy,2))); 
    if (distancia > radio){
        cout<<"Fuera de la circunferencia \n"; 
    }
    else if (distancia < radio){
        cout<<"Dentro de la circunferencia \n"; 
    }
    else{
        cout<<"Sobre la circunferencia \n";
    }

}
int main() { 
    double radio; 
    cout<<"Dame el radio: \n"; 
    cin>>radio; 
    double centrox; 
    cout<<"Dame la coordenada x del centro: \n"; 
    cin>>centrox;
    double centroy; 
    cout<<"Dame la coordenada y del centro: \n"; 
    cin>>centroy;
    double x; 
    cout<<"Dame la coordenada x del punto: \n"; 
    cin>>x;
    double y; 
    cout<<"Dame la coordenada y del punto: \n"; 
    cin>>y;
    dentro_fuera(x,y,centrox,centroy,radio); 
    return 0; 
}