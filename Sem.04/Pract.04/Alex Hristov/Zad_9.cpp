#include <iostream>
using namespace std;

int Length(int n){
   int count = 0;
   while(n!=0){
       count++;
       n/=10;
   }
   return count;
}

int returnDigit(int n,int k){
    int len = Length(n);
    
    while(n!=0){
        if(k==len){
            return n%10;
        }
        n/=10;
        len--;
    }
    return -1;
}

int main()
{
    int n,k;
    cout<<"Enter number:";
    cin>>n;
    cout<<"Enter digit from 0-9:";
    cin>>k;
    if(k>0 && k<9){
        cout<<"Certain digit is:"<<returnDigit(n,k);    
    }else{
        cout<<"Next time enter k between 0 and 9";    
    }
    
  
    
    return 0;

}
