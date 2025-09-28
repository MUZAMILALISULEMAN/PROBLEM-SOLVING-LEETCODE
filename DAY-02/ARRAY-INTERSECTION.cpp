#include<iostream>
using namespace std;
int main(){
	int n = 8;
	int m = 6;
int arr [n] = {1,2,4,1,3,3,6,10};
int arr2[m] = {2,3,1,6,8,6,9};
int max  =arr[0];
for(int i=0;i<n;i++){
	if(max < arr[i]) max = arr[i];

}
int hashMap[max+1] = {0};
for(int i=0;i<n;i++){
	hashMap[arr[i]]++;

}
int intersection[n]= {0};
int index = 0;
for(int i=0;i<m;i++){
	if(max < arr2[i]){
		continue;
	}else{
		if(hashMap[arr2[i]] >= 1){
			hashMap[arr2[i]] = 0;
			intersection[index++] = arr2[i];
		}
		
		
	}
}
for(int i=0;i<n;i++){
	if(intersection[i] != 0){
		cout<<intersection[i]<<" ";
	}
}





return 0;
}
