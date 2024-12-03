#include <iostream>
using namespace std;

int sum(int a, int b){
    return a+b;
}

int main()
{
    int a,b;
    cout<<"Enter number A:";
    cin>>a;
    cout<<"Enter number B:";
    cin>>b;
    
    cout<<"Sum of a+b="<<sum(a,b);
    return 0;

}
