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


int arr[4] = {10,11,12,14};
int arr2[5] = {1,2,3,4,5};
int lenArr = 4;
int lenArr2 = 5;
int i = 0;
int j = 0;
int swap;
while (i < lenArr)
{
    
if (arr[i] > arr2[j])
{
    swap = arr[i];
    arr[i] = arr2[j];
    arr2[j] = swap;
    
    
    while (j+1 < lenArr2 && swap > arr2[j+1] )
    {
        arr2[j] = arr2[j+1];
        j++;
    }
    arr2[j]=swap;
    j=0;
    
}




i++;
}




for (int i = 0; i < lenArr; i++)
{
    cout<<" "<<arr[i];
}
for (int i = 0; i < lenArr2; i++)
{
    cout<<" "<<arr2[i];
}







    return 0;
}