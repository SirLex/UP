#include <iostream>
#include <cmath>

using namespace std;

int powNum(int num, int step){
    int newNumber = 1;
    for(int i=0;i<step;i++)
    {
        newNumber*=num;
    }
    return newNumber;
}

int main()
{
    int num,step;
    cout<<"Enter nubmer:";
    cin>>num;
    cout<<"Enter step for pow of number:";
    cin>>step;
    if(step>0){
        cout<<"Number in interval:"<<powNum(num,step);
    }
    
    
  
    
    return 0;

}
