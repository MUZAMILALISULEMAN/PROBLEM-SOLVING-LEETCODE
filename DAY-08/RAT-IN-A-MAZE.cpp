#include<iostream>
#include<vector>
using namespace std;
int N = 3;
bool isReached = false;
void func(int arr[3][3],int i,int j,int visit[3][3],string path=""){
	
	if(i >= N || j>=N || i <0 || j< 0 || visit[i][j] == 1 || arr[i][j] == 1){
		return;
	}
	if(i==N-1 && j==N-1){
		printf("SUCCESS CASE");
		cout<<endl<<path;
		cout<<endl;
	}
	visit[i][j] = 1;
	func(arr,i+1,j,visit,path+"D");
	func(arr,i,j+1,visit,path+"R");
	func(arr,i,j-1,visit,path+"L");
	func(arr,i-1,j,visit,path+"U");
	visit[i][j] = 0;		
	
}


void printSubsets(vector<int> &arr,int i,vector<int> current){
	
	if(i == arr.size()){
		
		        cout << "{ ";
        for (char x : current) cout << x << " ";
        cout << "}" << endl;
		return;
	
	}
	
	current.push_back(arr[i]);
	printSubsets(arr,i+1,current);
	current.pop_back();
	printSubsets(arr,i+1,current);
	
	
	
	
}



int main(){

//int grid[3][3] = {{0,0,0},
//				  {0,0,0},
//				  {0,1,0}};
//				  
//
//int visit[3][3] = {{0,0,0},
//				  {0,0,0},
//				  {0,0,0}};
//				  
//				  
//				  
//func(grid,0,0,visit);
vector<int>a = {'a','b','c','d'}; 
vector<int>b;
printSubsets(a,0,b);
cout<<a.size();
return 0;
}
