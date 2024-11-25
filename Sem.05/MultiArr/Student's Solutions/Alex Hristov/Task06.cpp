#include <iostream>

using namespace std;

const int n = 4;

bool isMagicalSquare(int matrix[][n]) {
    int sumRow = 0;
    int sumCol = 0;
    int sumMainDiagonal = 0;
    int sumSecondDiagonal = 0;
    int sum = 0;
    
    
    for (int i = 0; i < n; i++) {
        sum += matrix[0][i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            sumRow += matrix[i][j];
            sumCol += matrix[j][i];     
        }

        if (sum != sumRow || sum != sumCol ) {
            return false;
        }

        sumMainDiagonal += matrix[i][i];
        sumSecondDiagonal += matrix[i][n-i-1];
        sumRow = 0;
        sumCol = 0;
        
    }
    if (sum != sumMainDiagonal || sum != sumSecondDiagonal ) {
        return false;
    }
    return true;
 

}


int main(){
    int matrix[n][n];

    for(int i = 0; i < n;i++){
        for(int j = 0; j < n; j++){
            cout<<"Enter number:";
            cin>>matrix[i][j];
        }
    }

    if(isMagicalSquare(matrix)){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
        
    
    return 0;
}
