#include<iostream>
using namespace std;
int main(){
	
	int arr[] = {1,2,3,4,5};
	int temp;
	for(int i=0;i<5/2;i++){
		temp = arr[i];
		arr[i] = arr[4-i];
		arr[4-i] = temp;
		
	}
	
	for(int i=0;i<5;i++){
		
		cout<<arr[i]<<endl;
		
		
	}
	
	return 0;
}
