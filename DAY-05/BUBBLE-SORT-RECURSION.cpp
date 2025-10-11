 	#include<iostream>
using namespace std;
int temp;
void Sort(int *arr,int n,int i){
	
	if(i == n-1){	
		 return;
	}
	if(arr[i] < arr[i+1]){
		temp = arr[i];
		arr[i] = arr[i+1];
		arr[i+1] = temp;
	}
	
	Sort(arr,n,i+1);
	
}
void bubbleSort(int *arr,int n,int i){
	
	if(n == 0){
		return;
	}
	Sort(arr,n,i);
	bubbleSort(arr,n-1,i);
	
	
	
}




int main(){
int arr[] = {1,2,4,5};
bubbleSort(arr,4,0);

for(int i=0;i<4;i++){
	cout<<" "<<arr[i];
}





return 0;
}
