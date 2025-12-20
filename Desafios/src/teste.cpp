#include <iostream>


int main(){
    std:int n = 1;
    for(int n=1; n < 22; n++){
        n+=2;
        std:: cout << n << std::endl;
        
    }
    std::cout << "\n";
    for(int j=0; j < 30; j++){
        std:: cout << j << std::endl;
        if(j == 29){
            break;
        }
    }
    

    return 0;
}