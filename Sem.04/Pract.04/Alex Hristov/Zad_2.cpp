#include <iostream>
using namespace std;

bool isEven(int a){
    if(a%2==0){
        return true;
    }else{
        return false;
    }
}

int main()
{
    int a;
    cout<<"Enter number:";
    cin>>a;
    
    if(isEven(a)){
        cout<<"Number is Even";
    }else{
        cout<<"Number is Odd";
    }
    
    return 0;

}
