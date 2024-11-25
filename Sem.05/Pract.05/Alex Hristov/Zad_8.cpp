#include <iostream>
using namespace std;

const int n = 1000;

void zeroOutElementsWithoutIndexDigit (int arr[], int n) {

    for(int j = 0;j<n;j++){
        int x=0;
        bool containIndex = false;
        int copyOfElement = arr[j];
        while(arr[j]!=0){
            x = arr[j]%10;
            if(x == j){
                containIndex = true;
            }
            arr[j]/=10;
        }
        if(containIndex){
            arr[j] = copyOfElement;
        }
    }
    for (int i = 0; i < n; i++) {
		cout<<" "<<  arr[i];
	}
    
    
}

int main()
{
	int n;
	
	cout << "Enter length of arr:";
	cin >> n;
	if(n>9){
	    cout<<"Enter number from 1 to 9 :)";
	}
	int arr[1000];
	
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	zeroOutElementsWithoutIndexDigit (arr,n);
    
    
    return 0;

}
