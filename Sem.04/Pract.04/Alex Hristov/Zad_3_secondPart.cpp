#include <iostream>
using namespace std;

bool isNegative(int a){
    if(a<0){
        return true;
    }
    return false;
}

int main()
{
    int a;
    cout<<"Enter number A:";
    cin>>a;
    
    if(isNegative(a)){
        cout<<"Yes";    
    }else{
        cout<<"No";    
    }
    
    return 0;

}
