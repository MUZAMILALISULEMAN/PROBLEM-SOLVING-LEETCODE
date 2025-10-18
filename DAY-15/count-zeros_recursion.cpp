#include<iostream>
using namespace std;
int func(int n,int count){
if(n==0){
    return 0;
}

int k = 0;
if(0 == n%10) k= 1;
return k+func(n/10);

}
int main(){


cout<<func(100010);

    return 0;
}