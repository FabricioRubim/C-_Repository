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

    cout << endl;

    int array[] = {2,4,1,3,6,9,0,5,3,19,11,24};
    for(int k=0; k < 12; ++k){
        if(k < 12){
            cout << array[k] << " ";
            continue;
        }
        else{
            break;
        }
    }
    
    return 0;
}