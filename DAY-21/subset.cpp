#include<iostream>
using namespace std;




void print(string k,string s){
if(s == ""){
    cout<<k<<endl;
    return;
}
print(k+s[0],s.substr(1));
print(k,s.substr(1));

}



int main(){

print("","abc");
// string s = "abc";


    return 0;
}