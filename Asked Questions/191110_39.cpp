#include <bits/stdc++.h>
using namespace std;

int main(){
	int m, n;
	cin >> m >> n;
	int data[m][n];
	int cmp[m][n];
	for(int a = 0;a < m;a++){
		for(int b = 0;b < n;b++){
			cin >> data[a][b];
			cmp[a][b] = 0;
		}
	}
	
	for(int a = 0;a < m;a++){
		int rowMin = data[a][0];
		int rowPos = 0;
		for(int b = 0;b < n;b++){
			if(rowMin > data[a][b]){
				rowMin = data[a][b];
				rowPos = b;
			}
		}
		cmp[a][rowPos]++;
	}
	
	for(int b = 0;b < n;b++){
		int colMax = data[0][b];
		int colPos = 0;
		for(int a = 0;a < m;a++){
			if(colMax < data[a][b]){
				colMax = data[a][b];
				colPos = a;
			}
		}
		cmp[colPos][b]++;
	}
	
	bool hasAns = false;
	
	for(int a = 0;a < m;a++){
		for(int b = 0;b < n;b++){
			if(cmp[a][b] == 2){
				cout << a << " " << b << " " << data[a][b] << endl;
				hasAns = true;
			}
		}
	}
	if(!hasAns)
		cout << "no" << endl;
	return 0;
}
