#include <iostream>

using namespace std;

const int n = 3;

bool isMatrixTriangle(int matrix[][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
           if(i>j && matrix[i][j]!=0){
               return false;
           }
        }
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

    if(isMatrixTriangle(matrix)){
        cout<<"Yes"<<endl;    
    }else{
        cout<<"No"<<endl;
    }
    
    

    return 0;
}
