#include <iostream>

using namespace std;

const int n = 4;

void printSpiralMatrix( int matrix[][4]) {
    int top = 0, bottom = n - 1;
    int left = 0, right = n - 1;

    while (top <= bottom && left <= right) {
        // Принтира горния ред отляво надясно
        for (int i = left; i <= right; ++i) {
            cout << matrix[top][i] << " ";
        }
        top++;

        // Принтира десния стълб отгоре надолу
        for (int i = top; i <= bottom; ++i) {
            cout << matrix[i][right] << " ";
        }
        right--;

        // Принтира долния ред отдясно наляво (ако все още има ред)
        if (top <= bottom) {
            for (int i = right; i >= left; --i) {
                cout << matrix[bottom][i] << " ";
            }
            bottom--;
        }

        // Принтира левия стълб отдолу нагоре (ако все още има колона)
        if (left <= right) {
            for (int i = bottom; i >= top; --i) {
                cout << matrix[i][left] << " ";
            }
            left++;
        }
    }
}

int main(){
    int matrix[n][n];
    
    
    cout<<"Enter numbers for Matrix :"<<endl;
    for(int i = 0; i < n;i++){
        for(int j = 0; j < n; j++){
            cout<<"Enter number:";
            cin>>matrix[i][j];
        }
    }
    
   
    cout<<endl;
    
    printSpiralMatrix(matrix);
    
    
    cout << endl;
    
    
    return 0;
}
