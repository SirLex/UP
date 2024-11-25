#include <iostream>

using namespace std;

int sumOfDigits(int num){
    int sum =0;
    while(num!=0){
        sum+= num%10;
        cout<<"num="<<num<<endl;
        num/=10;
    }
    return sum;
}
int returnSumWithOneDigits(int num){
    int result = sumOfDigits(num);
    cout<<"result="<<result<<endl;
    while(result<1 || result>9){
        result = sumOfDigits(result);
        cout<<"result="<<result<<endl;
    }
    return result;
    
}
int main()
{
    int n;
    
    cout<<"Enter nubmer:";
    cin>>n;
    
   cout<<"Single Digit Sum:"<<returnSumWithOneDigits(n);
    
  
    
    return 0;

}
