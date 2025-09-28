#include<iostream>
using namespace std;
int main(){
	int jump = 0;
	int n = 9;
int arr[n] = {0,1,0,2,0,3,0,4}; 
int j = 1;
int temp;
for(int i=0;i<n;i++){
	if(arr[i]==0){
		for(j=i;j<n;j++){
			if(arr[j] != 0){
				arr[i] = arr[j];
				arr[j] = 0;
					
				break;
			}else{
				jump++;
			}
		}
		
	}
	
}
for(int i=0;i<n;i++){
	cout<<arr[i]<<" ";
}
return 0;
}
