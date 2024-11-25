#include <iostream>

using namespace std;



int NOD2Num(int num1,int num2){
    while(num2!=0){
        int temp = num2;
        num2 = num1%num2;
        num1 = temp;
    }
    
    return num1;
}
int main()
{
    int a,b,c,d;
    char action;
    cout<<"Enter nubmer A:";
    cin>>a;
    cout<<"Enter number B:";
    cin>>b;
    cout<<"Enter number C:";
    cin>>c;
    cout<<"Enter number D:";
    cin>>d;
    
    int result = NOD2Num(a, b);
    result = NOD2Num(result, c);
    result = NOD2Num(result, d);
    
    cout<<"NOD of 4 numbers is:"<<result;
    
  
    
    return 0;

}
