#include <iostream>
using namespace std;

char to_lower(char S){
    return S+32;
}

int main()
{
    char S;
    cout<<"Enter Symbol S:";
    cin>>S;
    if(S>='A' && S<='Z'){
        cout<<"Lower Symbol:"<<to_lower(S);    
    }
    
  
    
    return 0;

}
