#include <iostream>

using namespace std;

const int n = 3;

void transpondedMatrix(int matrix[][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n/2; j++) {
           int temp = matrix[i][j];
           matrix[i][j] = matrix[j][i];
           matrix[j][i] = temp;
           
        }
    }
    
   
    
}


int main(){
    int matrix[n][n];
    
    for(int i = 0; i < n;i++){
        for(int j = 0; j < n; j++){
            cout<<"Enter number:";
            cin>>matrix[i][j];
        }
    }

    transpondedMatrix(matrix);
    
    for(int i = 0; i < n;i++){
        for(int j = 0; j < n; j++){
            cout<<" "<<matrix[i][j];
        }
        cout<<endl;
    }
    
    
    

    return 0;
}
