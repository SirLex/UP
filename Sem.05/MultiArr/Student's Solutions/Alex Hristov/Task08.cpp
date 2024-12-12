#include <iostream>

using namespace std;

const int m = 2;
const int k = 3;
const int n = 3;



void multiplyTwoMatrix(int matrix1[][k], int matrix2[][n], int result[][k]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = 0;
            for (int q = 0; q < k; q++) {
                
                result[i][j] += matrix1[i][q] * matrix2[q][j];
                
            }
        }
    }
}


int main(){
    int matrix1[m][k];
    int matrix2[k][n];
    
    int result[m][n];
    cout<<"Enter numbers for Matrix 1:"<<endl;
    for(int i = 0; i < m;i++){
        for(int j = 0; j < n; j++){
            cout<<"Enter number:";
            cin>>matrix1[i][j];
        }
    }
    
    cout<<"Enter numbers for Matrix 2:"<<endl;
    for(int i = 0; i < k;i++){
        for(int j = 0; j < n; j++){
            cout<<"Enter number:";
            cin>>matrix2[i][j];
        }
    }

    
    cout<<endl;
    
    multiplyTwoMatrix(matrix1,matrix2,result);
    
    cout<<"Multiply two matrix:"<<endl;    
    cout << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
