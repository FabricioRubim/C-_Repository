#include <iostream>
using namespace std;

int main(){
    int matriz[3][3] = {
        {3, 2, 1},
        {4, 6, 9},
        {9, 8, 5}
    };

    for(int i=0; i < 3; i++){
        for(int j=0; j < 3; j++){
            cout << matriz [i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}