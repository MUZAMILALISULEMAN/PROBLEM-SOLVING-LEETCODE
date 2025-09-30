#include<iostream>
using namespace std;
int main(){
string str = "mmmuzamilk";
int count = 0;
int len = str.length();
int i;
for(i=0;i<len-1;i++){

if(str[i] == str[i+1]){
count++;
}else if(count == 0) {
cout<<str[i];
return 0 ;
}else{
	count = 0;
}
}
if(str[i] != str[i-1]){
	cout<<str[i];
}

return 0;
}
