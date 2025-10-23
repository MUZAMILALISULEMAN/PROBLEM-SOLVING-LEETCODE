#include<iostream>
#include<vector>
using namespace std;
void traverseRectangle(int &UB,int &RB,int &LB,int &DB,vector<int> &answer,vector<vector<int>>&matrix,int &startI,int &startJ){
        int i = startI;
        int j = startJ;
        int s = 1;
        while(s <=4){
            switch(s){
                case 1:
                    while(j < RB){
                        answer.push_back(matrix[i][j++]);
                    }
                    j--;
                    break;
                case 2:
                    i++;
                    while(i < DB){
                        answer.push_back(matrix[i++][j]);
                    }
                    i--;
                    break;
                case 3:
                    j--;
                    while(j > LB){
                        answer.push_back(matrix[i][j--]);
                    }
                    j++;
                    break;
                case 4:
                 i--;
                 cout<<endl<<" "<<i<<" "<<endl;
                 while(i > UB){
                        answer.push_back(matrix[i--][j]);
                    }
                    i++;
                    
                    startI = i;
                    startJ = j+1;

                    break;
            }


            s++;
        }


    }
  
int main(){
    vector<vector<int>> matrix = {{1,2,3,-1},{4,5,6,-2},{7,8,9,-3}};
    int UB = 0;
    int RB = 4;
    int DB = 3;
    int LB = -1;
    vector<int> answers;
    int startI = 0;
    int startJ = 0;
    traverseRectangle(UB,RB,LB,DB,answers,matrix,startI,startJ);
    UB++;
    RB--;
    DB--;
    LB++;
    traverseRectangle(UB,RB,LB,DB,answers,matrix,startI,startJ);
    for(int k : answers){
        cout<<k<<" ";
    }
    cout<<endl<<startI<<" "<<startJ;





    return 0;
}