#include <iostream>
using namespace std;

bool isSQRT(int n){
   for(int i =0;i<n/2;i++){
       if(i*i==n){
           return true;
       }    
   }
   
   return false;
}

int main()
{
    int n;
    cout<<"Enter number:";
    cin>>n;
    
    if(n>0 && isSQRT(n)){
        cout<<"Number is exact square";    
    }else{
        cout<<"Number is NOT exact square";    
    }
    
  
    
    return 0;

}
