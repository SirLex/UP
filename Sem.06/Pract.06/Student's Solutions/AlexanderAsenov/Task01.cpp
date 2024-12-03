#include <iostream>
#include <cmath>
using namespace std;

int fromAnyToTen(int num, int numberSystem) {
    if (numberSystem < 2 || 10 < numberSystem) {
        return -1;
    }

    int result = 0;
    int count = 0;
    while (num != 0) {
        int digit = num % 10;
        
        if (digit >= numberSystem) {
            return -1;
        }

        result += pow(numberSystem, count) * digit;
        num /= 10;
        count++;
    }

    return result;
}

int fromTenToAny(int num, int numberSystem) {
    
    if (numberSystem < 2 || 10 < numberSystem) {
        return -1;
    }
    
    int power = 1;
    int result = 0;
    
    bool isNegative = num < 0;

    while (num != 0) {
        int digit = num % numberSystem;
        result += digit * power;
        power *= 10;
        num /= numberSystem;
    }

    return result;

}

int main()
{
    int num, numberSystemBegin, numberSystemConvert;
    cout << "Enter number: ";
    cin >> num;

    cout << "Enter the number system (2 - 10): ";
    cin >> numberSystemBegin;
    if (numberSystemBegin < 2 || 10 < numberSystemBegin) {
        cout << "Incorrect input";
        return 1;
    }

    cout << "Enter number system to convert to (2 - 10): ";
    cin >> numberSystemConvert;
    if (numberSystemBegin < 2 || 10 < numberSystemBegin) {
        cout << "Incorrect input";
        return 1;
    }

	cout << fromTenToAny(fromAnyToTen(num, numberSystemBegin), numberSystemConvert) << endl;
}

