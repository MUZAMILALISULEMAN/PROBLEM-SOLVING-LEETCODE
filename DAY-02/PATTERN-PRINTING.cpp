#include<iostream>
using namespace std;
int main(){
	
//	int n = 3;
//	int cols = 2*n - 1;
//	int mid = (cols/2);
//	for(int i=0;i<n;i++){
//		for(int j=0;j<cols;j++){
//			
//						if(j >= mid  - i && j<= mid + i){
//							cout<<"*";
//						}
//						else{
//						cout<<" ";
//						}
//			
//		}
//		cout<<endl;
//	}
//	
	
	int k  =1;
	for(int i=1;i<=5;i++){
		if(i%2 != 0){
				k = 1;
			}else{
				k = 0;
			}
		for(int j=1;j<=i;j++){
			
			cout<<k;
			 k = 1- k;
		}
		cout<<endl;
		
	}

	int ch = 0;
	int st;
	int end;
	bool check;
	int n = 4;
	for(int i=1;i<=n;i++){
		check = false;
		st = 1 + i;
		end = 2*n - i;
		
		for(int j=1;j<=2*n;j++){
			
			if(j >=st && j<=end){
				
				
				check = true;
				printf(" ");
				
				
				
			}else{
				if(check){
					ch--;
				}else{
					ch++;
				}
				cout<<ch;
			}
		
		}
		ch = 1;
		cout<<endl;
		
	}
	
	
	
	
	return 0;
}