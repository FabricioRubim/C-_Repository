#include <iostream>
using namespace std;

int main(){
    int x, y, z;
    cout << "Digite o numero x: " << endl;
    cin >> x;
    cout << "Digite o numero y: " << endl;
    cin >> y;
    cout << "Digite o numero z: " << endl;
    cin >> z;

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