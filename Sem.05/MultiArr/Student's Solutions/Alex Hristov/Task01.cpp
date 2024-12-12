#include <iostream>

using namespace std;

const int n = 3;



int minElement(int matrix[][n]) {
    int minEl = matrix[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(matrix[i][j]<minEl){
                minEl = matrix[i][j];
            }
        }
    }
    return minEl;
}


int main(){
    int matrix[n][n];


    for(int i = 0; i < n;i++){
        for(int j = 0; j < n; j++){
            cout<<"Enter number:";
            cin>>matrix[i][j];
        }
    }

    
    cout<<"Min element:"<<minElement(matrix);
    return 0;
}
