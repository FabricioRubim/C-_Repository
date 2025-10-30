#include <iostream>
#include <math.h>
using namespace std;

int p = 40;
int a = 1.85;
int result = p / pow(a, a);

int main(){

    if(result < 18.5){
        cout << "Abaixo do peso " << result;
    }
    else if(result >= 18.5 && result <= 24.99){
        cout << "Peso normal " << result;
    }
    else if(result >= 25 && result <= 29.99){
        cout << "Acima do peso " << result;
    }
    else if(result >= 30 && result <= 34.99){
        cout << "Obesidade grau I " << result;
    }
    else if(result >= 35 && result <= 39.99){
        cout << "Obesidade grau II (severa) " << result;
    }
    else{
        cout << "Obesidade grau III (mórbida) " << result;
    }

    return 0;
}