#include<iostream>
using namespace std;
int main(){


    
    int arr[7] = {1,26,4,1,10,9,5};
    int max = arr[0];
    int SecMax = arr[0];
    
for (int i = 0; i < 7; i++)
{
    if(arr[i] > max){
        SecMax = max;
        max = arr[i];
    }else if (arr[i] > SecMax  )
    {
        SecMax = arr[i];
    }
}



cout<<SecMax;




    return 0;
}