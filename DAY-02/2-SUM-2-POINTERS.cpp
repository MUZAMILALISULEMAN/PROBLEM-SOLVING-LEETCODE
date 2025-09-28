#include<iostream>
using namespace std;
int main(){
	
	int st = 0;
	int end = 4;
	int arr[] = {1,3,4,2,5};
	int sum = 0;
	int t = 7;
 	while(st <= end){
 		sum = arr[st] + arr[end];
 		if(sum == t){
 			cout<<st<<" "<<end<<endl;
 			cout<<"YES";
 			return 0;
		 }else if(sum > t){
		 	end--;
		 }else{
		 	st++;
		 }
 		
	 }
	
	
	
	return 0;
}