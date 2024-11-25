#include <iostream>
#include <cmath>

using namespace std;

int concatNum(int a,int b){
    int countDigit=0;
    int copyOfB = b;
    while(b!=0){
        countDigit++;
       b/=10;
    }
    return a * pow(10, countDigit) + copyOfB;
  
}

int main()
{
    int a,b,c;
    cout<<"Enter first number:";
    cin>>a;
    cout<<"Enter second number:";
    cin>>b;
    
    cout<<"Concat of two numbers:"<<concatNum(a,b);
    
  
    
    return 0;

}
