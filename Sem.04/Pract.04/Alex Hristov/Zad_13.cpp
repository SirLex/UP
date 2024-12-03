#include <iostream>
#include <cmath>

using namespace std;

int askUser(int from,int to){
    int input;
    do{
        cout<<"Enter number to guess:"<<endl;
        cin>>input;
        
    }while(input< from || input>to);
    return input;
}

int main()
{
    int from,to;
    cout<<"Enter nubmer for starting interval:";
    cin>>from;
    cout<<"Enter nubmer for ending interval:";
    cin>>to;
    
    cout<<"Number in interval:"<<askUser(from,to);
    
  
    
    return 0;

}
