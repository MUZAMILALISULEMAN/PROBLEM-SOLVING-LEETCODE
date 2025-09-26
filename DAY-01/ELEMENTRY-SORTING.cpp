#include<iostream>
using namespace std;
int main(){
	
//	for(int i=0;i<5;i++){
//		
//		for(int j=0;j<5-i-1;j++){
//			if(arr[j]>arr[j+1]){
//				temp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = temp;
//			}
//			
//		}
//		
//		
//		
//	}	
//int swap;
//	for(int i=0;i<5;i++){	
//		for(int j=i;j<5;j++){
//			if(arr[i]  > arr[j]){
//				temp = j;
//			}
//		
//		swap = arr[temp];
//		arr[temp] = arr[i];
//		arr[i] = swap;
//		
//		
//		}
//	
//		
//		
//		
//	}


int arr[] = {1,0,3,2,1,7,9};
int temp;
int j,index;
	for(int i=0;i<6;i++){	
	j = i+1;
	temp = arr[j];	
	while(j!=0){
		if(arr[j-1]>temp){
			  arr[j] = arr[j-1];
		}else{
			break;
		}
		j--;
	}	
	index = j;
	arr[index] = temp;
	}




	
	
	
	
	
	for(int i=0;i<7;i++){
		cout<<" "<<arr[i];
	}
	
	
	return 0;
}
