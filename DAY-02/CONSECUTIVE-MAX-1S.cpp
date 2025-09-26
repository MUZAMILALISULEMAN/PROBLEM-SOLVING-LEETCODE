#include<iostream>
using namespace std;
int main(){
	int count = 1;
	int flag = 1;
	int max = 0;
	int n = 10;
	int k =2;
	int arr[n] = {1,1,1,2,2,2,2,1,1,2};
	for(int i=0;i<n-1;i++){
		if(arr[i] == k && arr[i+1] == k ){
			count++;
		}else{
			flag = 0;
			if(count > max){
				max = count;
			}
			count = 1;
		}
		
	}
	if(flag){
		max = count;
	}
	cout<<max;
	
	return 0;
}