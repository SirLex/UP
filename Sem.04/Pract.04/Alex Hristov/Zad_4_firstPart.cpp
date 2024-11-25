#include <iostream>
using namespace std;

int absNum(int num){
    if(num<0){
        return -num;
    }else{
        return num;
    }
}

int main()
{
    int num;
    cout<<"Enter number:";
    cin>>num;
    
    cout<<"Absolute value of number:"<<absNum(num);
    
    return 0;

}
