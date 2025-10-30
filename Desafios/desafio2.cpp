#include <iostream>
using namespace std;

int main(){

    int matriz1[3][3] = {
        {2, 4, 6},
        {2, 9, 0},
        {10, 2, 7}
    };

    int matriz2[3][3]{
        {4, 4, 4},
        {2, 8, 9},
        {9, 1, 4}
    };
for (int i = 0; i < 3; i++)
{
    for(int j=0; j < 3; j++){
        cout << matriz1[i][j] + matriz2[i][j];
    }
    cout << "\n";
}
    

    return 0;
}