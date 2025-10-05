#include<iostream>
using namespace std;
void print(int n){
	if(n==0){
		return;
	}
	print(n-1);
	cout<<"*";	
	
	
}

void print2(int n){
	if(n==0){
		return;
	}
	print(n);
	cout<<endl;
	print2(n-1);
	
	
}
int main(){

print2(13);



return 0;
}
