#include<iostream>
using namespace std;
int ways = 0;
void climbDownStair(int n,string s=""){

    if(n == 0){
        ways++;
        cout<<s<<" ";
        return;
    }
    if(n < 0){
        return;
    }
    climbDownStair(n-1,s+"1");
    climbDownStair(n-2,s+"2");


}
int main(){
    climbDownStair(3);
    cout<<ways;




    return 0;
}