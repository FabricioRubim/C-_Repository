#include <iostream>
#include <iomanip>
#include <math.h>


double calculo_imc(){
double p;
double a;
std::cout << "Digite o seu peso: " << "\n";
std::cin >> p;
std::cout << "Digite sua altura: " << "\n";
std::cin >> a;
std::cout << std::fixed << std::setprecision(1);
double result = (p) / pow(a, 2);
return result;
}

int main(){

    double result = calculo_imc();

    if(result < 18.5){
        std::cout << "Abaixo do peso " << result;
    }
    else if(result >= 18.5 && result <= 24.99){
        std::cout << "Peso normal " << result;
    }
    else if(result >= 25 && result <= 29.99){
        std::cout << "Acima do peso " << result;
    }
    else if(result >= 30 && result <= 34.99){
        std::cout << "Obesidade grau I " << result;
    }
    else if(result >= 35 && result <= 39.99){
        std::cout << "Obesidade grau II (severa) " << result;
    }
    else{
        std::cout << "Obesidade grau III (mórbida) " << result;
    }

    return 0;
}