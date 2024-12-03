#include <iostream>
using namespace std;

char to_upper(char S){
    return S-32;
}

int main()
{
    char S;
    cout<<"Enter Symbol S:";
    cin>>S;
    if(S>='a' && S<='z'){
        cout<<"Upper Symbol:"<<to_upper(S);    
    }
    
  
    
    return 0;

}
