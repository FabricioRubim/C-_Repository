#include <bits/stdc++.h>

int main(){
    char operador;
    double num1, num2;
    std::cout<< "Escolhe um dos operadores(+,-,*,/): " << std::endl;
    std::cin >> operador;

    std::cout<< "Digite os dois numeros: " << std::endl;
    std::cin>> num1 >> num2;

    switch (operador)
    {
    case '+':
        std::cout<< "Resultado foi " << num1 << " + " << num2 << " = " << num1+num2 << std::endl;
        break;
    case '-':
        std::cout<< "Resultado foi " << num1 << " - " << num2 << " = " << num1-num2 << std::endl;
        break;
    case '*':
        std::cout<< "Resultado foi " << num1 << " * " << num2 << " = " << num1*num2 << std::endl;
        break;
    case '/':
        std::cout<< "Resultado foi " << num1 << " / " << num2 << " = " << num1/num2 << std::endl;
        if(num1/num2 != 0){
            std::cout<< "Divisão por zero não existe" << std::endl;
        }
        default:
        std::cout<< "Operador invalido";
    }
}