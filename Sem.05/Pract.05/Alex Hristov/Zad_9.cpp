#include <iostream>
using namespace std;

const int n = 1000;

int mostFrequent (int arr[], int n) {
    // int count[n];
    // for(int i = 0;i<n;i++){
    //     cout[i]=0;
    // }
    
    int mostFrequentElement= arr[0];
    
    int count = 0;
    int countMax = count;
    for (int i = 0; i < n; i++) {
        count=0;
		for(int j = 0;j<n;j++){
            if(arr[i]==arr[j]){
                
                count++;
                
                
                if(countMax < count){
                    countMax = count;
                    mostFrequentElement = arr[i];
                }
                
            }
            cout<<endl;
        }
        
	}

    return mostFrequentElement ;
    
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
	cout<<"Most Frequent first number: "<<mostFrequent (arr,n);
    
    
    return 0;

}
