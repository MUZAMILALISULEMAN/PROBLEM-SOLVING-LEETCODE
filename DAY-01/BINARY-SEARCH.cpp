#include<iostream>
using namespace std;
int main(){
//	binary search
int arr[] = {1,2,0,4,5};
int i = 0,j=4,mid;
int target = 3;
while(i<=j){
	mid = (i+j)/2;
	if(arr[mid] == target){
		return arr[mid];
	}else if(arr[mid] > target){
		j = j-1;
	}else{
		i = i+1;
	}
}




}
