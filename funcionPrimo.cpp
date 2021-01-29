// Imprimir en consola sólo 
// los números primos en un rango 
// determinado por el usuario.

#include<iostream>
using namespace std;

// Funcion para obtener la cantidad 
// de divisores (o factores) de un número.
int divs(int numero){
    int divisores = 0;
    for(int i=1; i<=numero; i++){
        if(numero%i==0)
        // Cada que haya un valor de 'i' por el que 
        // se pueda dividir exactamente el número se
        // aumenta 1 a 'divisores'.
            divisores++;
    }
    return divisores;
}

int main(){

    for(int i=1; i<=60; i++){
        // Un numero primo sólo tiene dos divisores:
        // el 1 y él mismo. Si tiene más de 2 o menos de
        // 2 divisores entonces no es primo.
        if(divs(i)==2){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}