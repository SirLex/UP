#include <iostream>
using namespace std;

const int n = 1000;


void fillNewArr(int arr[], int result[], int n, int a,int b) {
    int index = 0;
    for(int i = 0;i<n;i++){
        if(arr[i]>a && arr[i]<b){
            result[index] = arr[i];            
            index++;
        }
    }
    for(int i = 0;i<index;i++){
        cout<<" "<< result[i];
    }
}
int main()
{
	int n, a,b;
	
	cout << "Enter length of arr:";
	cin >> n;
	int arr[1000];
	int result[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	cout << "Enter number A:";
	cin >> a;
	cout << "Enter number B:";
	cin >> b;
    fillNewArr(arr,result,n,a,b);
    
    return 0;

}
