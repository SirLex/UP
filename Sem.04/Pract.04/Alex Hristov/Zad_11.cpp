#include <iostream>
using namespace std;

int NOK3Num(int a,int b, int c){
   for(int i=1;i<=a*b*c;i++){
       if(i%a==0 && i%b==0 && i%c==0){
           return i;
       }    
   }
   
   return 0;
}

int main()
{
    int a,b,c;
    cout<<"Enter number A:";
    cin>>a;
    cout<<"Enter number B:";
    cin>>b;
    cout<<"Enter number C:";
    cin>>c;
    
    cout<<"NOK of three number:"<<NOK3Num(a,b,c);
    
  
    
    return 0;

}
