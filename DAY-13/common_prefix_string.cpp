#include<iostream>
#include<vector>
using namespace std;
void display(const vector<int>& vec) {
    cout << "Vector elements: ";
    for (int val : vec) {
        cout << val << " ";
    }
    cout << endl;
}
int main(){


int arr[3] = {1,2,10};
int arr2[1] = {6};
vector<int>k;

int i = 0;
int j = 0;


while (i < 3 && j<1)
{

if (arr[i] < arr2[j])
{
    k.push_back(arr[i++]);
}else{
    
    k.push_back(arr2[j++]);
}
}
while (i<3)
{
    k.push_back(arr[i++]);
}
while(j<1)
{
    k.push_back(arr2[j++]);
}







display(k);








    return 0;
}