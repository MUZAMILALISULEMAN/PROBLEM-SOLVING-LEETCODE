#include<iostream>
using namespace std;
int main(){
string str = "aabbcdde";
int count = 0;
int len = str.length();
for(int i=0;i<len-1;i++){
	if(str[i] == str[i+1]){
		count++;
		continue;
	}
	if(str[i] != str[i+1] && count <= 1){
		cout<<str[i];
	}
}




return 0;
}
