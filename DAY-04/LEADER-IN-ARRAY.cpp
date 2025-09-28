#include<iostream>
using namespace std;
int main(){

int max = 0,index,n=7;
int arr[n] = {5,2,1,7,3,1,4}, leaders[n] = {0};
int k = 0;
for(int i=0;i<n;i++){
	if(arr[i] > max){
	max = arr[i];
	index = i;	
	} 
}
bool isLeader;
for(int i=index;i<n;i++){
	isLeader = true;
	for(int j = i+1;j<n;j++){
		if(arr[i] < arr[j]) isLeader = false;
	}
	if(isLeader){
		leaders[k++] = arr[i];
	}
}
for(int i=0;i<k;i++){
	cout<<leaders[i]<<" ";
}




return 0;
}
