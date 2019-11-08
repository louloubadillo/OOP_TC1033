#include <iostream>
using namespace std; //para no repetir std 
int main() {
  //Variables
  string nombre; 
  int edad; 
  //Imprimir
  cout<<"Hola C++ \n"; 
  cout<<"Dame tu nombre \n"; 
  cin>>nombre; //guarda el valor
  cout<<"Dame tu edad \n"; 
  cin>>edad; //guarda el valor
  cout << "Hola " << nombre <<"! En 20 años tendrás "<<
  (edad+20);
  return 0;
}