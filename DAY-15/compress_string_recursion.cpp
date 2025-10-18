#include<iostream>
#include<string>
using namespace std;
string compression(string str,string cmp = "",int i = 0,int count = 1){
if (str.empty()) return cmp;
if(i == str.length() - 1){
    
    
        cmp+=to_string(count);
        cmp+=str[i];
   
    return cmp;
}
if(str[i] == str[i+1]){
count++;
}else{
 cmp+=to_string(count);
 cmp += str[i];
 count = 1;
}
return compression(str,cmp,i+1,count);


}
int main(){

cout<<compression("hellk");




    return 0;
}