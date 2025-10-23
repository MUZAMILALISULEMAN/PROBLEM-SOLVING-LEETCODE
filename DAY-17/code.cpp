#include<iostream>
using namespace std;
int main(){

int numRows = 3;
string s = "PAYPALISHIRING";

        int x = numRows - 2;
        int cols = 0;
        int len = s.length();
        int k = 0;
        while(len >= numRows){
            if(k%2 == 0){
                
                cols++;
                len -= numRows;
            }else{
                cols+=x;
                len-=x;
            }
            k++;

        }
        
        cout<<++cols;

    char matrix[numRows][cols];

    k = 0;
    int i =0 ;
    int j = 0;
    len = s.length();
    while(k < len){
        if(j%numRows==0){
            while(i<numRows){
                matrix[i][j] = s[k++];
                i++;
            }
            j++;
            i=0;
        }else{
            x = numRows - 1;
            while(x> 0){
            matrix[x][j] = s[k++];
            x--;
            j++;
            }
    }
}


    

    return 0;
}