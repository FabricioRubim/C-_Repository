#include <bits/stdc++.h>

struct pessoa
{
    std::string nome;
    int idade;
};

int main(){
    pessoa joao = {"João", 20};
    std::cout << "Você é " + joao.nome + ", e sua idade é " << joao.idade << "\n";
    return 0;
}
