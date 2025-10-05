 #include<iostream>
using namespace std;
int rev_n = 0;
int digitCounter(int n){
	if(n==0){
		return n;
	}
	int k = 0;
	int digit = n%10;
	if(digit%2 == 0) k = 1;
	return k+digitCounter(n/10);
	
	
	
}
int reverseN = 0;
int reverse(int n){
	if(n == 0){
		return reverseN;
	}
	reverseN*=10;
	reverseN += n%10;
	n/=10;
	return reverse(n);
}

int main(){

cout<<reverse(8922);


return 0;
}
