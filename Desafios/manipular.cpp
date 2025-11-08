#include <bits/stdc++.h>
using namespace std;

struct pessoa
{
    string nome;
    int idade;
};

int main(){
    pessoa joao = {"João", 20};
    cout << joao.nome << endl;
    cout << joao.idade << endl;
    return 0;
}