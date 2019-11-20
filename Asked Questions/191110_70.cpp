#include <bits/stdc++.h>
using namespace std;

void modeChange();
int mode = 0;//0 右  1 左下  2 下  3 右上 

int main(){
	
	int n;
	cin >>n;
	int data[n][n];
	int step = 0;//斜向总长度 
	bool stepDir = 0;//0 斜向总长度应增大  1 斜向总长度应减小 
	
	for(int a = 0;a < n;a++){
		for(int b = 0;b < n;b++){
			cin >> data[a][b];
		}
	}
	int posCol = 0, posRow = 0;

	cout << data[posCol][posRow] << " ";
	for(int all = 1;all < n*n;all++){
		if(mode == 0){
			posRow++;
		}
		else if(mode == 1){
			if(step <n-1)
				step++ 
		}
		
	} 
	return 0;
}

void modeChange(){
	mode++;
	if(mode == 4)
		mode = 0;
	return;
}
