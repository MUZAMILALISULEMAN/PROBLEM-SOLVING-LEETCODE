#include<iostream>
using namespace std;
int main(){
	int arr[] = {10,7,10,12,13};
	int n = 5;
	int max = arr[0];
	for(int i=0;i<n;i++){
		if(arr[i] > max){
			max = arr[i];
		}
	}
	int counter = max;
	for(int i=0;i<max;i++){
		for(int j=0;j<n;j++){
			
			
		if(arr[j] >= counter){
			cout<<"*        ";
		}else{
			cout<<"         ";
		}	
	
		}
		cout<<endl;
		counter--;
		
		
	}
			cout<<"GAMES    ";
			cout<<"FOOTBALL ";
			cout<<"CRICKET  ";
			cout<<"PUBG     ";
			cout<<"CODING   ";
	
	
	
	
	
	return 0;
}