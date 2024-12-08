#include <iostream>

using namespace std;

const int n = 3;



void zigZagMatrixFunction(int matrix[][n], int zigZagMatrix[][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(i%2==0){
                zigZagMatrix[i][j] = matrix[i][j];
            }else{
                zigZagMatrix[i][j] = matrix[i][n-j-1];
            }
        }
        
    }
    
   
  
    
}


int main(){
    int matrix[n][n];
    int zigZagMatrix[n][n];
    for(int i = 0; i < n;i++){
        for(int j = 0; j < n; j++){
            cout<<"Enter number:";
            cin>>matrix[i][j];
        }
    }

    
    zigZagMatrixFunction(matrix,zigZagMatrix);
     for(int i = 0; i < n;i++){
        for(int j = 0; j < n; j++){
            cout<<" "<<zigZagMatrix[i][j];
        }
        cout<<endl;
    }

    return 0;
}
