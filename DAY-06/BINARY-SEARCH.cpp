#include<iostream>
using namespace std;
 int mid; 
int search(int s , int e,int k, int arr[])
{
	mid  = (s + e)/2; 
	if(s>e){
		return -1;
	}
	
	if(arr[mid] == k){
		return mid;
	}else if(arr[mid] < k){
		s = mid+1;
	}else{
		e = mid -1;
	}
	return search(s,e,k,arr);
	
	
}
int main(){

int arr[4] = {1,2,3,4};
cout<<search(0,3,4,arr);



return 0;
}
