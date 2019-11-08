#include <iostream>
#include <cmath>
using namespace std; //para no repetir std 
//Calcular si es año bisiesto
void bisiesto(int year){
    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)){
        cout<<"Es año bisiesto \n";
    }
    else{
        cout<<"Es un año normal \n";
    }
}
int main() {  
    int year; 
    cout<<"Dame un año: \n";
    cin>> year; 
    bisiesto(year); 
    return 0; 
}