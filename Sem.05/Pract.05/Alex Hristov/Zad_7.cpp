#include <iostream>
using namespace std;

const int n = 1000;

int lengthLongestRepetetiveSequence(int arr[], int n) {

    int count = 0;
    int countMax = count;
    
    for(int j = 0;j<n-1;j++){
        
        
        if(arr[j]==arr[j+1]){
            count++;
            if(countMax< count){
                countMax = count;
            }
            
        }else{
            count=0;
        }
        cout<<endl;
        
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
	cout<<"Length of longest reptetitive sequence:"<<lengthLongestDecreasingSequence(arr,n);
    
    
    return 0;

}
