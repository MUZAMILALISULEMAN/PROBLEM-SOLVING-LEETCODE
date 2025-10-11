#include<iostream>
using namespace std;
int temp;
int main(){
int arr[5] = {1,5,3,5,4};
int temp;
int j;
int target;

for(int i=1;i<5;i++){
	target = arr[i];
	for(j=i-1;j>=0;j--){
		
		
		if(arr[j] < target){
			arr[j+1] = arr[j];
		}else{
			break;
		}
		
		
	}
			arr[j+1] = target;
	
	
}


for(int i=0;i<5;i++){
	cout<<" "<<arr[i];
}




return 0;
}
