#include <iostream>
using namespace std;

const int n = 1000;

bool isSymetricalArr(int arr[], int n) {
    
    for(int i = 0;i<n;i++){
        if(arr[i]!=arr[n-i-1]){
            return false;
        }
    }
    return true;
}

int main()
{
	int n;
	
	cout << "Enter length of arr:";
	cin >> n;
	int arr[1000];
	
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	if(isSymetricalArr(arr,n)){
	    cout<<"Yes";   
	}else{
	    cout<<"No";
	}
    
    
    return 0;

}
