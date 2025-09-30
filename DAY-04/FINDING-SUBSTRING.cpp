#include<iostream>
using namespace std;
void makeWindow(string &window,int size,char ch){
	for(int i=0;i<size-1;i++){
		window[i] =window[i+1];
	}
	window[size-1] = ch;
	
}
int main(){
int window_size = 5;
string target = "leman";
string str = "hello world this is muzamil ali suleman";
int len = str.length() - window_size + 1;
string window = "";
for(int i=0;i<window_size;i++){
	window+=str[i];
}
int i;
for(i=0;i<len;i++){
	
	if(target == window){
		cout<<"FOUND AT "<<i;
		
	}
	makeWindow(window,window_size,str[i+window_size]);
	

	
}






return 0;
}
