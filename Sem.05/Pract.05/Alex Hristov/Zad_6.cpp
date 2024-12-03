#include <iostream>
using namespace std;

const int n = 1000;

int lengthLongestDecreasingSequence(int arr[], int n) {

    int count = 0;
    int countMax = count;
    int difference = 0;
    
    for(int j = 0;j<n-1;j++){
        difference = arr[j]-arr[j+1];
       
        if(difference>0){
            count++;
            if(countMax< count){
                countMax = count;
            }
            
        }else{
            count=0;
        }
        
    }
    return countMax+1;
    
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
	cout<<"Length of longest decreasing sequence:"<<lengthLongestDecreasingSequence(arr,n);
    
    
    return 0;

}
