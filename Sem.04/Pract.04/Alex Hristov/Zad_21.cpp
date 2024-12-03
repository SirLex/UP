#include <iostream>
using namespace std;
long sortDigits(long n) {
    
    long result = 0;
    for (int currentDigit = 0; currentDigit <= 9; currentDigit++) {
        long long temp = n;
        while (temp > 0) {
            if (temp % 10 == currentDigit) {
                result = result * 10 + currentDigit;
            }
            temp /= 10;
        }
    }
    
    return result;
}

int main() {
    long number;
    cout<<"\nВъведете число: ";
    cin>>number;
    cout<<"Резултат: "<<sortDigits(number)<<endl;
    
    return 0;
}
