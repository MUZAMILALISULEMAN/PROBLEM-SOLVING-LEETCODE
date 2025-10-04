#include<iostream>
using namespace std;
bool palindrome(string str){
	static string strr = "";
	static string Org = str;
	if(str == ""){
	if(strr == Org){
		return true;
	}
	
		return false;
	}
	strr.push_back(str.back());
	str.pop_back();
	return palindrome(str);
	
	
}
int main(){

cout<<palindrome("UHHUJ");



return 0;
}
