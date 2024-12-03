#include <iostream>
using namespace std;

double fabsNum(double num){
    if(num<0){
        return -num;
    }else{
        return num;
    }
}

int main()
{
    double num;
    cout<<"Enter number:";
    cin>>num;
    
    cout<<"Absolute value of number:"<<fabsNum(num);
    
    return 0;

}
