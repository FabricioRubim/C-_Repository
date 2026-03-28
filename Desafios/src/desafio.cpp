#include <iostream>
using namespace std;

int main(){
    int x, y, z;
    cout << "Digite o numeros: " << endl;
    cin >> x >> y >> z;

    if (x > y && x > z) {
        cout << "O maior numero é: " << x << endl;
    }
    else if (y > x && y > z) {
        cout << "O maior numero é: " << y << endl;
    }
    else if (z > x && z > y) {
        cout << "O maior numero é: " << z << endl;
    }
    else {
        cout << "Todos são iguais." << endl;
    }
    
    return 0;
}