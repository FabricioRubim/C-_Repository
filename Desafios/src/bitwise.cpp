#include <iostream>

int main(){

    int a, b, result;
    a = 10;
    b = 5;
    result = a << b * 3;
    result = a >> b / 3;

    std::cout << result << std::endl;
    std::cout << result << std::endl;

    return 0;
}