#include<iostream>
using namespace std;
string sequence(char k,string str , string ansString=""){
	if(str == ""){
		return ansString;
	}
	
	if(str.front() != k){
		ansString+= str.front();
	}
	str.erase(0, 1);
	return sequence(k,str,ansString);

	
	
}
int main(){
cout<<sequence('a',"HaLLO");




return 0;
}
