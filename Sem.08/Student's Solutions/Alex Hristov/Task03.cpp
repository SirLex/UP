#include <iostream>

using namespace std;

const int MaxSize = 1024;

void convertNum(long &num){
    int temp = num;
    int digit;
    num = 0;
    while(temp!=0){
        digit = temp % 10;
        num = num*10 + digit;
        temp /= 10;
    }
    
}



int main()
{
    long num;
    cout << "Enter number: ";
    cin>>num;
    
    convertNum(num);
    
    cout<<"New reversed number:"<<num;

}
