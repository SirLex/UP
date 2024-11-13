#include <iostream>

using namespace std;

const int n = 3;



void allDiagonal(int matrix[][n],int mainDiagonal[],int secondDiagonal[]) {
    cout<<"Main Diagonal:"<<endl;
    for (int i = 0; i < n; i++) {
        mainDiagonal[i] = matrix[i][i];
    }
    
    cout<<"Second Diagonal:"<<endl;
    for (int i = 0; i < n; i++) {
        secondDiagonal[i] = matrix[i][n-i-1];
    }
    
}


int main(){
    int matrix[n][n];
    int mainDiagonal[n];
    int secondDiagonal[n];

    for(int i = 0; i < n;i++){
        for(int j = 0; j < n; j++){
            cout<<"Enter number:";
            cin>>matrix[i][j];
        }
    }

    
    allDiagonal(matrix,mainDiagonal,secondDiagonal);
    cout<<"Main Diagonal:"<<endl;
    for (int i = 0; i < n; i++) {
        cout<<" "<<mainDiagonal[i];
    }
    cout<<"Second Diagonal:"<<endl;
    for (int i = 0; i < n; i++) {
        cout<<" "<<secondDiagonal[i];
    }

    return 0;
}
