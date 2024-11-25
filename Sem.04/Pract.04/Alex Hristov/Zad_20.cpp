#include <iostream>

using namespace std;

bool isPrime(int num) {
  for (int i = 2; i*i <= num; i++) {
    if (num % i == 0) {
      return false;
    }
  }
  return true;
}

void factorize(int num) {
  cout << num << " = ";
  while (num % 2 == 0) {
    cout << "2 . ";
    num /= 2;
  }

  for (int i = 3; i <= num; i ++) {
      if(isPrime(i)){
        while (num % i == 0) {
          cout << i << " . ";
          num /= i;
        }      
      }
    
  }

  if (num > 2) {
    cout << num;
  }
  cout << endl;
}

int main() {
  int n;
  cout << "Enter number: ";
  cin >> n;
  factorize(n);
  return 0;
}
