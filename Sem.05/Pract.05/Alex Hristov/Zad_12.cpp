#include <iostream>
using namespace std;


bool LinearDependent (int arr1[],int arr2[], int n, int m) {
    
    double ratio = (double)arr2[0] / arr1[0];
    for (int i = 0; i < n; i++) {
        if (ratio * arr1[i] != arr2[i]) {
            return false;
        }
    }

    return true;
}

int main()
{
	int n,m;
	
	cout << "Enter length of arr1:";
	cin >> n;
	int arr1[n];
	if(n<0 && n>1000 ){
        cout << "Enter length of array to be between 0 and 1000";    
    }
	for (int i = 0; i < n; i++) {
	    cout<<"Enter element for first array:";
		cin >> arr1[i];
	}
	
	cout << "Enter length of arr2:";
	cin >> m;
	int arr2[m];
	
	if(m<0 && m>1000 ){
        cout << "Enter length of arrays to be between 0 and 1000";    
    }
	for (int i = 0; i < m; i++) {
	    cout<<"Enter element for second array:";
		cin >> arr2[i];
	}

    if(LinearDependent (arr1,arr2,n,m) == true && n==m){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
	
    
    
    return 0;

}
