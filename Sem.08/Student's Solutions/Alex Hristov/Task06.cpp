#include <iostream>

using namespace std;

const int MaxSize = 1024;


int NumCalc(long num, int k, int l){
    if(k<0 || k>9 || l<0 || l>9){
        return 0;
    }
    
    int temp;
    int copyOfNum = num;
    int countDigits = 0;
    
    while(num != 0){
        temp = num % 10;
        num /= 10;
        countDigits++;
    }
    
    int divisor = 1;
    for (int i = 0; i < k+1; i++) {
        divisor *= 10;
    }
    int digit1 = (copyOfNum / divisor) % 10;

    divisor = 1;
    for (int i = 0; i < l+1; i++) {
        divisor *= 10;
    }
    
    int digit2 = (copyOfNum / divisor) % 10;
    
    return digit1 + digit2;
}

int main() {
    long num;
    int k, l;

    cout << "Enter number: ";
    cin>>num;
    cout << "Enter k-digit: ";
    cin>>k;
    cout << "Enter l-digit: ";
    cin>>l;

    cout<<"Sum of k digit and l digit:"<<NumCalc(num, k, l);
    
    return 0;
}
