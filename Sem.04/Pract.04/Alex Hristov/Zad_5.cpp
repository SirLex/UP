#include <iostream>
using namespace std;

void print(int num, char S){
    for(int i=0;i<num;i++){
        cout<<" "<<S;
    }
}

int main()
{
    int num;
    cout<<"Enter number for N repeats of Symbol:";
    cin>>num;
    char S;
    cout<<"Enter Symbol S:";
    cin>>S;
    
    print(num,S);
    
    return 0;

}
