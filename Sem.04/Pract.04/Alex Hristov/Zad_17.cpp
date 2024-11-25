#include <iostream>
#include <cmath>

using namespace std;

int findNearestPowerOfTwo(int num){
    
    int i = 6;
    int currentPowerOf2 = 0;
    int currenteIndexPowerOf2;
    do{
        i++;
    }while(pow(2,i)<num);
    if(abs(pow(2,i)-num) > abs(pow(2,i+1)-num)){
        return pow(2,i+1);
    }else{
        return pow(2,i);
    }
    
}
int main()
{
    int n;
    
    cout<<"Enter nubmer between 100 and 100000:";
    cin>>n;
    if(n<100 || n>100000){
        cout<<"Enter number between 100 and 100000";
    }
    cout<<"Nearest Power Of Two:"<<findNearestPowerOfTwo(n);
    
  
    
    return 0;

}
