#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int num){
    for(int i=2;i<num;i++){
        if(num%i==0){
            return false;
        }       
    }
    return true;
}
void printAllSimpleNumberToNum(int num){
    for (int i = 2; i <=  num; i++) {
        if (isPrime(i)) {
          cout << i << " ";
        }
    }
    cout<<endl;
}

bool isSumOfTwoPrimes(int num) {
  for (int i = 2; i <= num / 2; i++) {
    if (isPrime(i) && isPrime(num - i)) {
      return true;
    }
  }
  return false;
}
int main()
{
    int n;
    
    cout<<"Enter nubmer:";
    cin>>n;
    
    printAllSimpleNumberToNum(n);
    if(isSumOfTwoPrimes(n)){
        cout<<"It can be present by sum of two prime numbers"<<endl;
    }else{
        cout<<"It can NOT be present by sum of two prime numbers";
    }
    
  
    
    return 0;

}
