#include<iostream>
using namespace std;
int main(){
//RIGHT SHFITING 	
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int n = sizeof(arr)/sizeof(arr[0]);
	int temp;
	int k = 3;
	for(int j=k;j>0;j--){
	temp = arr[n-1];	
	for(int i=n-1;i>=1;i--){
		arr[i] = arr[i-1];
	}
	arr[0] = temp;
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
}
