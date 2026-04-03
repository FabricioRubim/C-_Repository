#include <iostream>

int main(){

    int a, b, result;
    std::cout << "Digite os numero a e b: " << "\n";
    std::cin >> a >> b;

    result = a << b * 2;
    result = a >> b / 2;

    std::cout << result << std::endl;
    std::cout << result << std::endl;

    return 0;
}
