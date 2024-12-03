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

int main()
{
    int n;
    cout<<"Enter number:";
    cin>>n;
    cout<<"Length of number:"<<Length(n);
  
    
    return 0;

}
