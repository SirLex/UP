#include <iostream>
using namespace std;

bool isCapitalLetter(char S){
    if(S>= 'A' && S<='Z'){
        return true;
    }else{
        return false;
    }
}
bool checkSymbol(char S){
    if( isCapitalLetter(S) || (S>= 'a' && S<='z') ){
        return true;    
    }else{
        return false;
    }
}
int main()
{
    int num;
    cout<<"Enter number for N repeats of Symbol:";
    cin>>num;
    char S;
    cout<<"Enter Symbol S:";
    cin>>S;
    if(checkSymbol(S)){
        cout<<S<<" is letter"<<endl;    
        if(isCapitalLetter(S)){
            cout<<S<<" is Capital letter"<<endl;    
        }else{
            cout<<S<<" is not Capital letter"<<endl;    
        }
    }else{
        cout<<S<<" is not letter"<<endl;    
    }
  
    
    return 0;

}
