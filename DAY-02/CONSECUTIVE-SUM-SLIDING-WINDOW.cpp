#include<iostream>
using namespace std;
int main(){

	int n = 10;
	int t = 5;
	int arr[n] = {1,3,1,2,2,6,3,0,2,10};
	int flag = 0;
	int sum;
	int size;
	int index = 0;
	int answers[11] = {0};
	int j;
	for (int i=1;i<=10;i++){
		flag = 0;
		sum = 0;
		size = i;
		
	for(int l = 0;l<size;l++){
		sum+= arr[l];
	}
	for(j=size;j<n;j++){
	if(sum == t){
		answers[size] += 1;  
		
		
		flag = 1;
	}
	sum+= arr[j];
	sum-= arr[j-size];	
	}
	if(flag && sum==t){
		j--;
		answers[size]+=1;
	}

	}
	
	
	
	for(int i=0;i<11;i++){
		cout<<answers[i]<<" "<<endl;
	}
	return 0;
}