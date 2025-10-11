#include<iostream>
using namespace std;
int sumEven(int n){
	if(n==0){
		return 0;
	}
	if(n%2 == 0){
		return n+sumEven(n-1);
	}else{
		return sumEven(n-1);
	}
	
	
}
int main(){

cout << sumEven(6);



return 0;
}
