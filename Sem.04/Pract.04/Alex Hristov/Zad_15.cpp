#include <iostream>
#include <cmath>

using namespace std;

int calculate(int a, int b,char action){
    switch(action){
        case '+':
            return a+b;
            break;
        case '-':
            return a-b;
            break;
        case '*':
            return a*b;
            break;
        case '/':
            if(b!=0){
                return a/b;    
            }
            break;
        case '%':
            if(b!=0){
                return a%b;
            }
            
            break;
        default:
            return a+b;
            break;
    }
    return a+b;
}

int main()
{
    int a,b;
    char action;
    cout<<"Enter nubmer A:";
    cin>>a;
    cout<<"Enter number B:";
    cin>>b;
    cout<<"Enter action for number:";
    cin>>action;
    
    cout<<"Calculated numbers:"<<calculate(a,b,action);
    
  
    
    return 0;

}
