#include <iostream>
using namespace std;
const int m = 2;
const int n = 3;
void sumTwoMatrices(int matrix1[][n], int matrix2[][n], int result[][n]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];  
       }
    }
}
void multiplyMatrixByNumber(int matrix[][n], int number, int result[][n]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = matrix[i][j] * number;
        }
    }
}
int main(){
    int matrix1[m][n];
    int matrix2[m][n];
    int result[m][n];
    cout<<"Enter numbers for Matrix 1:"<<endl;
    for(int i = 0; i < m;i++){
        for(int j = 0; j < n; j++){
            cout<<"Enter number:";
            cin>>matrix1[i][j];
        }
    }
    
    cout<<"Enter numbers for Matrix 2:"<<endl;
    for(int i = 0; i < m;i++){
        for(int j = 0; j < n; j++){
            cout<<"Enter number:";
            cin>>matrix2[i][j];
        }
    }
    
    int number;
    
    cout<<"Enter number for multiply:";
    cin>>number;
    
    sumTwoMatrices(matrix1, matrix2, result);
    
    cout<<"Sum two matrices:"<<endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    cout<<endl;
    
    multiplyMatrixByNumber(matrix1,number, result);
    
    
    cout << endl;
    cout<<"Multiply matrix 1 with "<<number<<endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
