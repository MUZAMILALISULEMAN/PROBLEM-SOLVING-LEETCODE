#include<iostream>

using namespace std;
int main(){

    int n = 10;
    int array[n] = {1,2,3,4,5,6,7,8,9,10};
    int min;
    int max;
    int temp;

    for (int i = 0; i < n; i++){
        max = i;
        min = i;
        for (size_t j = i; j < n; j++){
            
        
        
                
                if(array[j]  > array[max] && i%2==0){
                    max = j;

                }
            
                  if(array[j]  < array[min] && i%2!=0){
                    min = j;
                }

            }

            if (i%2== 0)
            {
                temp = array[max];
                array[max] = array[i];
                array[i] = temp;
            }else{
                temp = array[min];
                array[min] = array[i];
                array[i] = temp;
            }
            

        



}


    
    for (int i = 0; i <n; i++)
    {
        cout<<array[i]<<" ";
    }
    









    return  0;
}